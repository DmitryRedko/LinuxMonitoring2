#include "s21_test.h"


TEST(MatrixMulTest, MulMatrix1) {
    
    S21Matrix matrix1(4, 5);
    matrix1.FillByMass(new double[20]{7, 5, 3, 9, 8, 4, 1, 3, 1, 9, 1, 6, 1, 5, 2, 2, 1, 5, 4, 7});

    S21Matrix matrix2(5, 5);
    matrix2.FillByMass(new double[25]{4, 1, 7, 6, 8, 1, 2, 5, 1, 7, 9, 2, 9, 9, 5, 3, 5, 2, 6, 9, 9, 6, 6, 7, 2});

    S21Matrix expectedMul(4, 5);
    expectedMul.FillByMass(new double[20]{ 159, 116, 167, 184, 203, 128, 71, 116, 121, 81, 52, 52, 68, 65, 104, 129, 76, 114, 131, 98 });

    S21Matrix result = matrix1;
    result *= matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix2) {
    
    S21Matrix matrix1(2, 4);
    matrix1.FillByMass(new double[8]{8, 4, 8, 5, 2, 8, 5, 8});

    S21Matrix matrix2(4, 4);
    matrix2.FillByMass(new double[16]{9, 2, 9, 4, 8, 4, 3, 5, 7, 2, 3, 7, 3, 7, 2, 5});

    S21Matrix expectedMul(2, 4);
    expectedMul.FillByMass(new double[8]{ 175, 83, 118, 133, 141, 102, 73, 123 });

    S21Matrix result = matrix1;
    result *= matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix3) {
    
    S21Matrix matrix1(4, 5);
    matrix1.FillByMass(new double[20]{1, 7, 8, 6, 4, 1, 3, 2, 8, 5, 9, 6, 6, 8, 7, 5, 5, 4, 9, 9});

    S21Matrix matrix2(5, 2);
    matrix2.FillByMass(new double[10]{5, 6, 6, 9, 1, 2, 7, 1, 4, 2});

    S21Matrix expectedMul(4, 2);
    expectedMul.FillByMass(new double[8]{ 113, 99, 101, 55, 171, 142, 158, 110 });

    S21Matrix result = matrix1 * matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix4) {
    
    S21Matrix matrix1(4, 5);
    matrix1.FillByMass(new double[20]{3, 4, 3, 3, 2, 9, 3, 7, 2, 9, 5, 1, 7, 4, 8, 8, 1, 6, 9, 7});

    S21Matrix matrix2(5, 5);
    matrix2.FillByMass(new double[25]{1, 2, 5, 3, 4, 6, 1, 6, 2, 8, 9, 9, 3, 2, 6, 7, 5, 2, 2, 7, 7, 2, 1, 8, 5});

    S21Matrix expectedMul(4, 5);
    expectedMul.FillByMass(new double[20]{ 89, 56, 56, 45, 93, 167, 112, 97, 123, 161, 158, 110, 68, 103, 138, 180, 130, 89, 112, 174 });

    S21Matrix result = matrix1;
    result *= matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix5) {
    
    S21Matrix matrix1(3, 2);
    matrix1.FillByMass(new double[6]{7, 9, 9, 4, 5, 1});

    S21Matrix matrix2(2, 4);
    matrix2.FillByMass(new double[8]{4, 7, 3, 4, 2, 5, 2, 7});

    S21Matrix expectedMul(3, 4);
    expectedMul.FillByMass(new double[12]{ 46, 94, 39, 91, 44, 83, 35, 64, 22, 40, 17, 27 });

    S21Matrix result = matrix1;
    result *= matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix6) {
    
    S21Matrix matrix1(2, 4);
    matrix1.FillByMass(new double[8]{1, 2, 7, 1, 3, 2, 5, 7});

    S21Matrix matrix2(4, 5);
    matrix2.FillByMass(new double[20]{2, 1, 3, 5, 1, 5, 7, 1, 9, 3, 1, 7, 5, 8, 7, 6, 1, 1, 5, 3});

    S21Matrix expectedMul(2, 5);
    expectedMul.FillByMass(new double[10]{ 25, 65, 41, 84, 59, 63, 59, 43, 108, 65 });

    S21Matrix result = matrix1;
    result *= matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix7) {
    
    S21Matrix matrix1(4, 2);
    matrix1.FillByMass(new double[8]{2, 1, 2, 3, 9, 6, 3, 1});

    S21Matrix matrix2(2, 5);
    matrix2.FillByMass(new double[10]{5, 5, 3, 5, 7, 7, 2, 4, 1, 4});

    S21Matrix expectedMul(4, 5);
    expectedMul.FillByMass(new double[20]{ 17, 12, 10, 11, 18, 31, 16, 18, 13, 26, 87, 57, 51, 51, 87, 22, 17, 13, 16, 25 });

    S21Matrix result = matrix1 * matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix8) {
    
    S21Matrix matrix1(2, 5);
    matrix1.FillByMass(new double[10]{2, 3, 6, 7, 7, 3, 2, 1, 3, 5});

    S21Matrix matrix2(5, 3);
    matrix2.FillByMass(new double[15]{5, 6, 5, 6, 3, 7, 7, 3, 2, 5, 4, 4, 8, 8, 5});

    S21Matrix expectedMul(2, 3);
    expectedMul.FillByMass(new double[6]{ 161, 123, 106, 89, 79, 68 });

    S21Matrix result = matrix1 * matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix9) {
    
    S21Matrix matrix1(2, 5);
    matrix1.FillByMass(new double[10]{7, 5, 3, 2, 8, 5, 6, 4, 2, 3});

    S21Matrix matrix2(5, 3);
    matrix2.FillByMass(new double[15]{6, 5, 1, 8, 8, 4, 4, 7, 5, 9, 3, 8, 2, 8, 8});

    S21Matrix expectedMul(2, 3);
    expectedMul.FillByMass(new double[6]{ 128, 166, 122, 118, 131, 89 });

    S21Matrix result = matrix1;
    result *= matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix10) {
    
    S21Matrix matrix1(2, 4);
    matrix1.FillByMass(new double[8]{8, 6, 9, 3, 7, 9, 5, 9});

    S21Matrix matrix2(4, 2);
    matrix2.FillByMass(new double[8]{3, 6, 9, 1, 3, 9, 1, 9});

    S21Matrix expectedMul(2, 2);
    expectedMul.FillByMass(new double[4]{ 108, 162, 126, 177 });

    S21Matrix result = matrix1 * matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix11) {
    
    S21Matrix matrix1(2, 2);
    matrix1.FillByMass(new double[4]{5, 9, 1, 4});

    S21Matrix matrix2(2, 3);
    matrix2.FillByMass(new double[6]{1, 3, 1, 7, 7, 2});

    S21Matrix expectedMul(2, 3);
    expectedMul.FillByMass(new double[6]{ 68, 78, 23, 29, 31, 9 });

    S21Matrix result = matrix1;
    result *= matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix12) {
    
    S21Matrix matrix1(3, 3);
    matrix1.FillByMass(new double[9]{1, 6, 2, 9, 8, 1, 9, 3, 9});

    S21Matrix matrix2(3, 4);
    matrix2.FillByMass(new double[12]{7, 9, 9, 7, 4, 4, 8, 8, 8, 7, 6, 5});

    S21Matrix expectedMul(3, 4);
    expectedMul.FillByMass(new double[12]{ 47, 47, 69, 65, 103, 120, 151, 132, 147, 156, 159, 132 });

    S21Matrix result = matrix1 * matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix13) {
    
    S21Matrix matrix1(4, 2);
    matrix1.FillByMass(new double[8]{9, 6, 5, 4, 2, 2, 1, 5});

    S21Matrix matrix2(2, 5);
    matrix2.FillByMass(new double[10]{5, 8, 2, 3, 9, 6, 5, 7, 3, 9});

    S21Matrix expectedMul(4, 5);
    expectedMul.FillByMass(new double[20]{ 81, 102, 60, 45, 135, 49, 60, 38, 27, 81, 22, 26, 18, 12, 36, 35, 33, 37, 18, 54 });

    S21Matrix result = matrix1;
    result *= matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix14) {
    
    S21Matrix matrix1(5, 2);
    matrix1.FillByMass(new double[10]{8, 4, 8, 8, 6, 4, 9, 2, 6, 9});

    S21Matrix matrix2(2, 2);
    matrix2.FillByMass(new double[4]{7, 8, 7, 9});

    S21Matrix expectedMul(5, 2);
    expectedMul.FillByMass(new double[10]{ 84, 100, 112, 136, 70, 84, 77, 90, 105, 129 });

    S21Matrix result = matrix1;
    result *= matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix15) {
    
    S21Matrix matrix1(4, 4);
    matrix1.FillByMass(new double[16]{6, 3, 2, 6, 5, 8, 4, 2, 2, 7, 1, 4, 9, 4, 8, 4});

    S21Matrix matrix2(4, 4);
    matrix2.FillByMass(new double[16]{4, 2, 5, 6, 7, 2, 5, 3, 5, 2, 6, 9, 2, 8, 4, 8});

    S21Matrix expectedMul(4, 4);
    expectedMul.FillByMass(new double[16]{ 67, 70, 81, 111, 100, 50, 97, 106, 70, 52, 67, 74, 112, 74, 129, 170 });

    S21Matrix result = matrix1 * matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix16) {
    
    S21Matrix matrix1(4, 2);
    matrix1.FillByMass(new double[8]{2, 3, 6, 2, 2, 2, 8, 5});

    S21Matrix matrix2(2, 2);
    matrix2.FillByMass(new double[4]{5, 2, 8, 2});

    S21Matrix expectedMul(4, 2);
    expectedMul.FillByMass(new double[8]{ 34, 10, 46, 16, 26, 8, 80, 26 });

    S21Matrix result = matrix1;
    result *= matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix17) {
    
    S21Matrix matrix1(2, 3);
    matrix1.FillByMass(new double[6]{5, 4, 3, 3, 2, 5});

    S21Matrix matrix2(3, 4);
    matrix2.FillByMass(new double[12]{6, 8, 4, 1, 6, 1, 5, 3, 8, 2, 3, 2});

    S21Matrix expectedMul(2, 4);
    expectedMul.FillByMass(new double[8]{ 78, 50, 49, 23, 70, 36, 37, 19 });

    S21Matrix result = matrix1;
    result *= matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix18) {
    
    S21Matrix matrix1(5, 3);
    matrix1.FillByMass(new double[15]{5, 5, 2, 9, 8, 7, 9, 8, 2, 7, 2, 6, 2, 7, 7});

    S21Matrix matrix2(3, 2);
    matrix2.FillByMass(new double[6]{6, 9, 1, 7, 2, 6});

    S21Matrix expectedMul(5, 2);
    expectedMul.FillByMass(new double[10]{ 39, 92, 76, 179, 66, 149, 56, 113, 33, 109 });

    S21Matrix result = matrix1 * matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix19) {
    
    S21Matrix matrix1(4, 3);
    matrix1.FillByMass(new double[12]{6, 1, 5, 3, 5, 6, 8, 9, 3, 4, 9, 1});

    S21Matrix matrix2(3, 5);
    matrix2.FillByMass(new double[15]{1, 5, 9, 8, 2, 8, 3, 7, 9, 5, 6, 9, 8, 2, 5});

    S21Matrix expectedMul(4, 5);
    expectedMul.FillByMass(new double[20]{ 44, 78, 101, 67, 42, 79, 84, 110, 81, 61, 98, 94, 159, 151, 76, 82, 56, 107, 115, 58 });

    S21Matrix result = matrix1 * matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulTest, MulMatrix20) {
    
    S21Matrix matrix1(2, 3);
    matrix1.FillByMass(new double[6]{2, 4, 3, 1, 6, 9});

    S21Matrix matrix2(3, 2);
    matrix2.FillByMass(new double[6]{2, 4, 4, 9, 4, 9});

    S21Matrix expectedMul(2, 2);
    expectedMul.FillByMass(new double[4]{ 32, 71, 62, 139 });

    S21Matrix result = matrix1 * matrix2;
    
    ASSERT_TRUE(result == expectedMul);
}
