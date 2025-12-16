#include "matrix_op.h"
#include <stdio.h>
#include <math.h> 
#include <float.h> 
// 輔助函式：計算 2x2 矩陣的行列式 (用於伴隨矩陣)
double det_2x2(double a, double b, double c, double d) {
    return a * d - b * c;
}

// 實作 1: 輔助函式 - 顯示矩陣內容
void matrix_print(Matrix M) {
    int i, j; // C89 宣告
    printf("[\n");
    for (i = 0; i < SIZE; i++) {
        printf("  ");
        for (j = 0; j < SIZE; j++) {
            printf("%.4f ", M.data[i][j]);
        }
        printf("\n");
    }
    printf("]\n");
}

// 實作 2: 基本運算 - 矩陣加法 (A + B)
Matrix matrix_add(Matrix A, Matrix B) {
    Matrix result;
    int i, j; // C89 宣告
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result.data[i][j] = A.data[i][j] + B.data[i][j];
        }
    }
    return result;
}

// 實作 3: 基本運算 - 矩陣減法 (A - B)
Matrix matrix_subtract(Matrix A, Matrix B) {
    Matrix result;
    int i, j; // C89 宣告
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result.data[i][j] = A.data[i][j] - B.data[i][j];
        }
    }
    return result;
}

// 實作 4: 基本運算 - 元素乘法 (A ∘ B)
Matrix matrix_element_multiply(Matrix A, Matrix B) {
    Matrix result;
    int i, j; // C89 宣告
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result.data[i][j] = A.data[i][j] * B.data[i][j];
        }
    }
    return result;
}

// 實作 5: 線性代數運算 - 矩陣乘法 (A * B)
Matrix matrix_multiply(Matrix A, Matrix B) {
    Matrix result;
    int i, j, k; // C89 宣告
    
    // 確保結果矩陣初始化為 0
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result.data[i][j] = 0.0;
        }
    }

<<<<<<< HEAD
// �i���B��
double matrix_determinant(Matrix A);    // ��C�� ($Det(A)$)
Matrix matrix_adjoint(Matrix A);        // ���H�x�} ($Adj(A)$)
Matrix matrix_inverse(Matrix A);        // �f�x�} ($A^{-1}$)

#endif // MATRIX_OP_H
// ��@�G�x�}���k (A * B)
Matrix matrix_multiply(Matrix A, Matrix B) {
    Matrix result;
    
    // �T�O���G�x�}��l�Ƭ� 0
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result.data[i][j] = 0.0;
        }
    }

    // C[i][j] = A ���� i �� �P B ���� j �C ���I�n (dot product)
    // �ݭn�ϥΤT�ӱ_���j��
    for (int i = 0; i < SIZE; i++) {       // �M�����G�x�}���� (i)
        for (int j = 0; j < SIZE; j++) {   // �M�����G�x�}���C (j)
            for (int k = 0; k < SIZE; k++) { // ���歼�n�M (k)
=======
    // 進行矩陣乘法運算 C[i][j] = A[i][k] * B[k][j]
    for (i = 0; i < SIZE; i++) {       
        for (j = 0; j < SIZE; j++) {   
            for (k = 0; k < SIZE; k++) { 
>>>>>>> 866a8d7cc389ac3f948432c2c8fb98c3b2f7666f
                result.data[i][j] += A.data[i][k] * B.data[k][j];
            }
        }
    }
    return result;
}
<<<<<<< HEAD
=======
// 實作 6: 線性代數運算 - 矩陣轉置 (Aᵀ)
Matrix matrix_transpose(Matrix A) {
    Matrix result;
    int i, j; // C89 宣告
    
    // 互換行和列：result[i][j] = A[j][i]
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result.data[i][j] = A.data[j][i];
        }
    }
    return result;
}
<<<<<<< HEAD
>>>>>>> 866a8d7cc389ac3f948432c2c8fb98c3b2f7666f
=======
// 實作 7: 進階運算 - 行列式 (Det(A))
double matrix_determinant(Matrix A) {
    double det;
    // 使用薩魯斯法則 (Sarrus' Rule)
    // det = a(ei - fh) - b(di - fg) + c(dh - eg)
    
    det = A.data[0][0] * (A.data[1][1] * A.data[2][2] - A.data[1][2] * A.data[2][1]) -
          A.data[0][1] * (A.data[1][0] * A.data[2][2] - A.data[1][2] * A.data[2][0]) +
          A.data[0][2] * (A.data[1][0] * A.data[2][1] - A.data[1][1] * A.data[2][0]);
          
    return det;
}
// 實作 8: 進階運算 - 伴隨矩陣 (Adj(A))
Matrix matrix_adjoint(Matrix A) {
    Matrix adj;
    
    // adj[i][j] 是 A 的元素 A[j][i] 的代數餘子式
    
    // 代數餘子式 C[i][j] = (-1)^(i+j) * M[i][j]
    
    // 計算第一行元素的代數餘子式轉置後，填入 adj 的第一列 (adj[i][0] => A[0][i])
    adj.data[0][0] = det_2x2(A.data[1][1], A.data[1][2], A.data[2][1], A.data[2][2]); // A[0][0] 餘子式
    adj.data[1][0] = -det_2x2(A.data[1][0], A.data[1][2], A.data[2][0], A.data[2][2]);// A[0][1] 餘子式 (變號)
    adj.data[2][0] = det_2x2(A.data[1][0], A.data[1][1], A.data[2][0], A.data[2][1]); // A[0][2] 餘子式
    
    // 計算第二行元素的代數餘子式轉置後，填入 adj 的第二列
    adj.data[0][1] = -det_2x2(A.data[0][1], A.data[0][2], A.data[2][1], A.data[2][2]);// A[1][0] 餘子式 (變號)
    adj.data[1][1] = det_2x2(A.data[0][0], A.data[0][2], A.data[2][0], A.data[2][2]); // A[1][1] 餘子式
    adj.data[2][1] = -det_2x2(A.data[0][0], A.data[0][1], A.data[2][0], A.data[2][1]);// A[1][2] 餘子式 (變號)

    // 計算第三行元素的代數餘子式轉置後，填入 adj 的第三列
    adj.data[0][2] = det_2x2(A.data[0][1], A.data[0][2], A.data[1][1], A.data[1][2]); // A[2][0] 餘子式
    adj.data[1][2] = -det_2x2(A.data[0][0], A.data[0][2], A.data[1][0], A.data[1][2]);// A[2][1] 餘子式 (變號)
    adj.data[2][2] = det_2x2(A.data[0][0], A.data[0][1], A.data[1][0], A.data[1][1]); // A[2][2] 餘子式
    
    return adj;
}
<<<<<<< HEAD
>>>>>>> a806fed101dc31a8abb4163fc2f992bdfe52f7d3
=======
// 實作 9: 進階運算 - 逆矩陣 (A⁻¹)
Matrix matrix_inverse(Matrix A) {
    Matrix result;
    int i, j; // C89 宣告
    
    // 1. 計算行列式
    double det = matrix_determinant(A);
    
    // 檢查行列式是否接近零 (矩陣不可逆)
    // 容忍度使用 1e-9
    if (fabs(det) < 1e-9) { 
        printf("Error: Determinant is zero (%.4f). Matrix is not invertible.\n", det);
        
        // 返回一個零矩陣作為錯誤標記
        for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {
                result.data[i][j] = 0.0;
            }
        }
        return result;
    }

    // 2. 計算伴隨矩陣
    Matrix adj = matrix_adjoint(A);
    
    // 3. 計算 A⁻¹ = (1/det) * Adj(A)
    double inv_det = 1.0 / det;
    
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            // 將伴隨矩陣的每個元素除以行列式
            result.data[i][j] = adj.data[i][j] * inv_det;
        }
    }
    
    return result;
}
>>>>>>> 92813a9ca24d2a718325de0aae197ecbec47989a
