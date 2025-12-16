<<<<<<< HEAD
#ifndef MATRIX_OP_H
#define MATRIX_OP_H

#define SIZE 3 // ©w¸q¯x°}ºû«×¬° 3x3

// ¯x°}µ²ºc (¨Ï¥Î double «¬§OÀx¦s¤¸¯À)
typedef struct {
    double data[SIZE][SIZE];
} Matrix;

// --- ¨ç¦¡«Å§i (Functions Declarations) ---

// »²§U¨ç¦¡
void matrix_print(Matrix M); // Åã¥Ü¯x°}¤º®e
double det_2x2(double a, double b, double c, double d); // »²§U­pºâ 2x2 ¦æ¦C¦¡

// °ò¥»¹Bºâ
Matrix matrix_add(Matrix A, Matrix B);          // ¥[ªk (A + B)
Matrix matrix_subtract(Matrix A, Matrix B);     // ´îªk (A - B)
Matrix matrix_element_multiply(Matrix A, Matrix B); // ¤¸¯À­¼ªk (A ¢X B)

// ½u©Ê¥N¼Æ¹Bºâ
Matrix matrix_multiply(Matrix A, Matrix B);     // ¯x°}­¼ªk (A * B)
Matrix matrix_transpose(Matrix A);              // Âà¸m (A?)

// ¶i¶¥¹Bºâ (»Ý­n±µÄò¹ê§@)
double matrix_determinant(Matrix A);    // ¦æ¦C¦¡ (Det(A))
Matrix matrix_adjoint(Matrix A);        // ¦ñÀH¯x°} (Adj(A))
Matrix matrix_inverse(Matrix A);        // °f¯x°} (A?1)

#endif // MATRIX_OP_H
=======
#ifndef MATRIX_OP_H
#define MATRIX_OP_H

#define SIZE 3 // å®šç¾©çŸ©é™£ç¶­åº¦ç‚º 3x3

// çŸ©é™£çµæ§‹ (ä½¿ç”¨ double åž‹åˆ¥å„²å­˜å…ƒç´ )
typedef struct {
    double data[SIZE][SIZE];
} Matrix;

// --- å‡½å¼å®£å‘Š (Functions Declarations) ---

// è¼”åŠ©å‡½å¼
void matrix_print(Matrix M); // é¡¯ç¤ºçŸ©é™£å…§å®¹
double det_2x2(double a, double b, double c, double d); // è¼”åŠ©è¨ˆç®— 2x2 è¡Œåˆ—å¼

// åŸºæœ¬é‹ç®—
Matrix matrix_add(Matrix A, Matrix B);          // åŠ æ³• (A + B)
Matrix matrix_subtract(Matrix A, Matrix B);     // æ¸›æ³• (A - B)
Matrix matrix_element_multiply(Matrix A, Matrix B); // å…ƒç´ ä¹˜æ³• (A âˆ˜ B)

// ç·šæ€§ä»£æ•¸é‹ç®—
Matrix matrix_multiply(Matrix A, Matrix B);     // çŸ©é™£ä¹˜æ³• (A * B)
Matrix matrix_transpose(Matrix A);              // è½‰ç½® (Aáµ€)

// é€²éšŽé‹ç®— (éœ€è¦æŽ¥çºŒå¯¦ä½œ)
double matrix_determinant(Matrix A);    // è¡Œåˆ—å¼ (Det(A))
Matrix matrix_adjoint(Matrix A);        // ä¼´éš¨çŸ©é™£ (Adj(A))
Matrix matrix_inverse(Matrix A);        // é€†çŸ©é™£ (Aâ»Â¹)

#endif // MATRIX_OP_H
>>>>>>> 866a8d7cc389ac3f948432c2c8fb98c3b2f7666f
