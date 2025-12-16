#include "matrix_op.h"
#include <stdio.h>
#include <math.h> // 包含數學函式，如 fabs

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

    // 進行矩陣乘法運算 C[i][j] = A[i][k] * B[k][j]
    for (i = 0; i < SIZE; i++) {       
        for (j = 0; j < SIZE; j++) {   
            for (k = 0; k < SIZE; k++) { 
                result.data[i][j] += A.data[i][k] * B.data[k][j];
            }
        }
    }
    return result;
}
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
