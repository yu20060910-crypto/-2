#include "matrix_op.h"
#include <stdio.h>
#include <math.h> 
#include <float.h> 

// 輔助函式：計算 2x2 矩陣的行列式
double det_2x2(double a, double b, double c, double d) {
    return a * d - b * c;
}

// 實作 1: 輔助函式 - 顯示矩陣內容
void matrix_print(Matrix M) {
    int i, j;
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
    // ... [您的加法程式碼] ...
}

// 實作 5: 矩陣乘法 (A * B)
Matrix matrix_multiply(Matrix A, Matrix B) {
    Matrix result;
    int i, j, k; 

    // 確保結果矩陣初始化為 0
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result.data[i][j] = 0.0;
        }
    }

    for (i = 0; i < SIZE; i++) {       
        for (j = 0; j < SIZE; j++) {   
            for (k = 0; k < SIZE; k++) { 
                result.data[i][j] += A.data[i][k] * B.data[k][j];
            }
        }
    }
    return result;
}

// 實作 6: 矩陣轉置 (A^T)
Matrix matrix_transpose(Matrix A) {
    // ... [您的轉置程式碼] ...
}

// 實作 7: 行列式 (Det(A))
double matrix_determinant(Matrix A) {
    double det;
    // ... [您的行列式計算程式碼] ...
    return det;
}

// 實作 8: 伴隨矩陣 (Adj(A))
Matrix matrix_adjoint(Matrix A) {
    Matrix adj;
    // ... [您的伴隨矩陣計算程式碼] ...
    return adj;
}

// 實作 9: 逆矩陣 (A^-1)
Matrix matrix_inverse(Matrix A) {
    Matrix result;
    int i, j;

    // 1. 計算行列式
    double det = matrix_determinant(A);
    // ... [您的逆矩陣計算程式碼，包含檢查 det != 0 的邏輯] ...
    return result;
}
        }
    }
    
    return result;
}
>>>>>>> 92813a9ca24d2a718325de0aae197ecbec47989a
