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
double det_2x2(double a, double b, double c, double d); // 輔助計算 2x2 行列式

// 基本運算
Matrix matrix_add(Matrix A, Matrix B);          // 加法 (A + B)
Matrix matrix_subtract(Matrix A, Matrix B);     // 減法 (A - B)
Matrix matrix_element_multiply(Matrix A, Matrix B); // 元素乘法 (A ° B)

// 線性代數運算
Matrix matrix_multiply(Matrix A, Matrix B);     // 矩陣乘法 (A * B)
Matrix matrix_transpose(Matrix A);              // 轉置 (A?)

// 進階運算 (需要接續實作)
double matrix_determinant(Matrix A);    // 行列式 (Det(A))
Matrix matrix_adjoint(Matrix A);        // 伴隨矩陣 (Adj(A))
Matrix matrix_inverse(Matrix A);        // 逆矩陣 (A?1)

#endif // MATRIX_OP_H
