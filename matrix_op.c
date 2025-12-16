#include "matrix_op.h"
#include <stdio.h>
#include <math.h> // åŒ…å«æ•¸å­¸å‡½å¼ï¼Œå¦‚ fabs

// è¼”åŠ©å‡½å¼ï¼šè¨ˆç®— 2x2 çŸ©é™£çš„è¡Œåˆ—å¼ (ç”¨æ–¼ä¼´éš¨çŸ©é™£)
double det_2x2(double a, double b, double c, double d) {
    return a * d - b * c;
}

// å¯¦ä½œ 1: è¼”åŠ©å‡½å¼ - é¡¯ç¤ºçŸ©é™£å…§å®¹
void matrix_print(Matrix M) {
    int i, j; // C89 å®£å‘Š
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

// å¯¦ä½œ 2: åŸºæœ¬é‹ç®— - çŸ©é™£åŠ æ³• (A + B)
Matrix matrix_add(Matrix A, Matrix B) {
    Matrix result;
    int i, j; // C89 å®£å‘Š
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result.data[i][j] = A.data[i][j] + B.data[i][j];
        }
    }
    return result;
}

// å¯¦ä½œ 3: åŸºæœ¬é‹ç®— - çŸ©é™£æ¸›æ³• (A - B)
Matrix matrix_subtract(Matrix A, Matrix B) {
    Matrix result;
    int i, j; // C89 å®£å‘Š
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result.data[i][j] = A.data[i][j] - B.data[i][j];
        }
    }
    return result;
}

// å¯¦ä½œ 4: åŸºæœ¬é‹ç®— - å…ƒç´ ä¹˜æ³• (A âˆ˜ B)
Matrix matrix_element_multiply(Matrix A, Matrix B) {
    Matrix result;
    int i, j; // C89 å®£å‘Š
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result.data[i][j] = A.data[i][j] * B.data[i][j];
        }
    }
    return result;
}

// å¯¦ä½œ 5: ç·šæ€§ä»£æ•¸é‹ç®— - çŸ©é™£ä¹˜æ³• (A * B)
Matrix matrix_multiply(Matrix A, Matrix B) {
    Matrix result;
    int i, j, k; // C89 å®£å‘Š
    
    // ç¢ºä¿çµæœçŸ©é™£åˆå§‹åŒ–ç‚º 0
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result.data[i][j] = 0.0;
        }
    }

<<<<<<< HEAD
// ¶i¶¥¹Bºâ
double matrix_determinant(Matrix A);    // ¦æ¦C¦¡ ($Det(A)$)
Matrix matrix_adjoint(Matrix A);        // ¦ñÀH¯x°} ($Adj(A)$)
Matrix matrix_inverse(Matrix A);        // °f¯x°} ($A^{-1}$)

#endif // MATRIX_OP_H
// ¹ê§@¡G¯x°}­¼ªk (A * B)
Matrix matrix_multiply(Matrix A, Matrix B) {
    Matrix result;
    
    // ½T«Oµ²ªG¯x°}ªì©l¤Æ¬° 0
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result.data[i][j] = 0.0;
        }
    }

    // C[i][j] = A ªº²Ä i ¦æ »P B ªº²Ä j ¦C ªºÂI¿n (dot product)
    // »İ­n¨Ï¥Î¤T­Ó±_ª¬°j°é
    for (int i = 0; i < SIZE; i++) {       // ¹M¾úµ²ªG¯x°}ªº¦æ (i)
        for (int j = 0; j < SIZE; j++) {   // ¹M¾úµ²ªG¯x°}ªº¦C (j)
            for (int k = 0; k < SIZE; k++) { // °õ¦æ­¼¿n©M (k)
=======
    // é€²è¡ŒçŸ©é™£ä¹˜æ³•é‹ç®— C[i][j] = A[i][k] * B[k][j]
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
// å¯¦ä½œ 6: ç·šæ€§ä»£æ•¸é‹ç®— - çŸ©é™£è½‰ç½® (Aáµ€)
Matrix matrix_transpose(Matrix A) {
    Matrix result;
    int i, j; // C89 å®£å‘Š
    
    // äº’æ›è¡Œå’Œåˆ—ï¼šresult[i][j] = A[j][i]
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result.data[i][j] = A.data[j][i];
        }
    }
    return result;
}
>>>>>>> 866a8d7cc389ac3f948432c2c8fb98c3b2f7666f
