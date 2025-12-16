#include <stdio.h>
#include "matrix_op.h" // 包含您的函式庫

int main() {
    printf("--- 3x3 Matrix Operations Library Test ---\n\n");

    // 建立測試矩陣 A 和 B
    Matrix A = {
        {{1.0, 2.0, 3.0},
         {4.0, 5.0, 6.0},
         {7.0, 8.0, 9.0}}
    };
    
    Matrix B = {
        {{9.0, 8.0, 7.0},
         {6.0, 5.0, 4.0},
         {3.0, 2.0, 1.0}}
    };
    
    // 顯示原始矩陣
    printf("Matrix A:\n");
    matrix_print(A);
    printf("Matrix B:\n");
    matrix_print(B);

    // 測試加法 (A + B)
    printf("\n--- Testing Matrix Addition (A + B) ---\n");
    Matrix C_add = matrix_add(A, B);
    matrix_print(C_add);

    // 測試矩陣乘法 (A * B)
    printf("\n--- Testing Matrix Multiplication (A * B) ---\n");
    Matrix C_mul = matrix_multiply(A, B);
    matrix_print(C_mul);

    // 接下來您將在這裡測試轉置、行列式、逆矩陣等功能
    
    return 0;
}
