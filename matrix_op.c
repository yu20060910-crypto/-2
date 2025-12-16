#ifndef MATRIX_OP_H
#define MATRIX_OP_H

#define SIZE 3 // 定義矩陣維度為 3x3

// 矩陣結構 (使用 double 型別儲存元素)
typedef struct {
    double data[SIZE][SIZE];
} Matrix;

// --- 函式宣告 (Functions Declarations) ---

// 輔助函式
void matrix_print(Matrix M); // 顯示矩陣內容

// 基本運算
Matrix matrix_add(Matrix A, Matrix B);          // 加法 (A + B)
Matrix matrix_subtract(Matrix A, Matrix B);     // 減法 (A - B)
Matrix matrix_element_multiply(Matrix A, Matrix B); // 元素乘法 ( Hadamard product $A \circ B$)

// 線性代數運算
Matrix matrix_multiply(Matrix A, Matrix B);     // 矩陣乘法 (A * B)
Matrix matrix_transpose(Matrix A);              // 轉置 ($A^T$)

// 進階運算
double matrix_determinant(Matrix A);    // 行列式 ($Det(A)$)
Matrix matrix_adjoint(Matrix A);        // 伴隨矩陣 ($Adj(A)$)
Matrix matrix_inverse(Matrix A);        // 逆矩陣 ($A^{-1}$)

#endif // MATRIX_OP_H
// 實作：矩陣乘法 (A * B)
Matrix matrix_multiply(Matrix A, Matrix B) {
    Matrix result;
    
    // 確保結果矩陣初始化為 0
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result.data[i][j] = 0.0;
        }
    }

    // C[i][j] = A 的第 i 行 與 B 的第 j 列 的點積 (dot product)
    // 需要使用三個巢狀迴圈
    for (int i = 0; i < SIZE; i++) {       // 遍歷結果矩陣的行 (i)
        for (int j = 0; j < SIZE; j++) {   // 遍歷結果矩陣的列 (j)
            for (int k = 0; k < SIZE; k++) { // 執行乘積和 (k)
                result.data[i][j] += A.data[i][k] * B.data[k][j];
            }
        }
    }
    return result;
}
