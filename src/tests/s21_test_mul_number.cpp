#include "s21_test.h"


TEST(MatrixMulNumberTest, MulNumber1) {
    
    S21Matrix matrix(3, 4);
    matrix.FillByMass(new double[12]{9, 6, 10, 7, 1, 8, 5, 1, 2, 5, 1, 4});

    S21Matrix expectedMul(3, 4);
    expectedMul.FillByMass(new double[12]{81, 54, 90, 63, 9, 72, 45, 9, 18, 45, 9, 36});

    S21Matrix result = matrix * 9;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber2) {
    
    S21Matrix matrix(6, 2);
    matrix.FillByMass(new double[12]{2, 9, 2, 8, 7, 2, 5, 7, 5, 10, 1, 7});

    S21Matrix expectedMul(6, 2);
    expectedMul.FillByMass(new double[12]{20, 90, 20, 80, 70, 20, 50, 70, 50, 100, 10, 70});

    S21Matrix result = matrix * 10;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber3) {
    
    S21Matrix matrix(3, 4);
    matrix.FillByMass(new double[12]{6, 8, 4, 4, 3, 8, 5, 5, 3, 1, 5, 4});

    S21Matrix expectedMul(3, 4);
    expectedMul.FillByMass(new double[12]{54, 72, 36, 36, 27, 72, 45, 45, 27, 9, 45, 36});

    S21Matrix result = matrix;
    result*= 9;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber4) {
    
    S21Matrix matrix(4, 3);
    matrix.FillByMass(new double[12]{9, 1, 6, 5, 4, 2, 9, 7, 4, 7, 6, 9});

    S21Matrix expectedMul(4, 3);
    expectedMul.FillByMass(new double[12]{36, 4, 24, 20, 16, 8, 36, 28, 16, 28, 24, 36});

    S21Matrix result = matrix * 4;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber5) {
    
    S21Matrix matrix(3, 4);
    matrix.FillByMass(new double[12]{3, 10, 7, 10, 9, 8, 1, 4, 4, 10, 9, 2});

    S21Matrix expectedMul(3, 4);
    expectedMul.FillByMass(new double[12]{12, 40, 28, 40, 36, 32, 4, 16, 16, 40, 36, 8});

    S21Matrix result = matrix * 4;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber6) {
    
    S21Matrix matrix(5, 6);
    matrix.FillByMass(new double[30]{6, 7, 8, 5, 1, 2, 4, 1, 9, 10, 2, 2, 10, 1, 1, 1, 9, 1, 9, 5, 5, 6, 8, 9, 9, 10, 1, 2, 5, 1});

    S21Matrix expectedMul(5, 6);
    expectedMul.FillByMass(new double[30]{36, 42, 48, 30, 6, 12, 24, 6, 54, 60, 12, 12, 60, 6, 6, 6, 54, 6, 54, 30, 30, 36, 48, 54, 54, 60, 6, 12, 30, 6});

    S21Matrix result = matrix * 6;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber7) {
    
    S21Matrix matrix(6, 3);
    matrix.FillByMass(new double[18]{2, 2, 3, 7, 5, 9, 7, 1, 4, 4, 8, 7, 7, 6, 3, 2, 6, 9});

    S21Matrix expectedMul(6, 3);
    expectedMul.FillByMass(new double[18]{20, 20, 30, 70, 50, 90, 70, 10, 40, 40, 80, 70, 70, 60, 30, 20, 60, 90});

    S21Matrix result = matrix;
    result*= 10;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber8) {
    
    S21Matrix matrix(6, 5);
    matrix.FillByMass(new double[30]{5, 4, 8, 5, 10, 2, 5, 10, 10, 2, 10, 9, 3, 4, 10, 2, 10, 10, 6, 7, 1, 1, 9, 4, 5, 10, 5, 10, 9, 2});

    S21Matrix expectedMul(6, 5);
    expectedMul.FillByMass(new double[30]{30, 24, 48, 30, 60, 12, 30, 60, 60, 12, 60, 54, 18, 24, 60, 12, 60, 60, 36, 42, 6, 6, 54, 24, 30, 60, 30, 60, 54, 12});

    S21Matrix result = matrix * 6;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber9) {
    
    S21Matrix matrix(6, 3);
    matrix.FillByMass(new double[18]{5, 1, 4, 1, 8, 4, 8, 10, 3, 6, 5, 4, 9, 8, 3, 2, 8, 3});

    S21Matrix expectedMul(6, 3);
    expectedMul.FillByMass(new double[18]{25, 5, 20, 5, 40, 20, 40, 50, 15, 30, 25, 20, 45, 40, 15, 10, 40, 15});

    S21Matrix result = matrix;
    result*= 5;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber10) {
    
    S21Matrix matrix(2, 5);
    matrix.FillByMass(new double[10]{3, 1, 9, 1, 4, 8, 9, 9, 5, 9});

    S21Matrix expectedMul(2, 5);
    expectedMul.FillByMass(new double[10]{9, 3, 27, 3, 12, 24, 27, 27, 15, 27});

    S21Matrix result = matrix;
    result*= 3;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber11) {
    
    S21Matrix matrix(5, 3);
    matrix.FillByMass(new double[15]{9, 3, 8, 10, 9, 7, 8, 3, 2, 2, 1, 10, 7, 8, 4});

    S21Matrix expectedMul(5, 3);
    expectedMul.FillByMass(new double[15]{18, 6, 16, 20, 18, 14, 16, 6, 4, 4, 2, 20, 14, 16, 8});

    S21Matrix result = matrix * 2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber12) {
    
    S21Matrix matrix(5, 6);
    matrix.FillByMass(new double[30]{3, 6, 4, 5, 6, 5, 5, 5, 8, 5, 6, 1, 4, 3, 1, 4, 6, 8, 7, 6, 9, 9, 4, 1, 9, 8, 4, 9, 10, 2});

    S21Matrix expectedMul(5, 6);
    expectedMul.FillByMass(new double[30]{6, 12, 8, 10, 12, 10, 10, 10, 16, 10, 12, 2, 8, 6, 2, 8, 12, 16, 14, 12, 18, 18, 8, 2, 18, 16, 8, 18, 20, 4});

    S21Matrix result = matrix;
    result*= 2;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber13) {
    
    S21Matrix matrix(3, 5);
    matrix.FillByMass(new double[15]{6, 4, 5, 8, 7, 6, 5, 3, 1, 1, 7, 10, 1, 1, 1});

    S21Matrix expectedMul(3, 5);
    expectedMul.FillByMass(new double[15]{60, 40, 50, 80, 70, 60, 50, 30, 10, 10, 70, 100, 10, 10, 10});

    S21Matrix result = matrix * 10;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber14) {
    
    S21Matrix matrix(5, 5);
    matrix.FillByMass(new double[25]{4, 7, 6, 1, 6, 1, 10, 8, 1, 2, 4, 8, 5, 10, 5, 5, 4, 10, 6, 2, 2, 1, 10, 5, 3});

    S21Matrix expectedMul(5, 5);
    expectedMul.FillByMass(new double[25]{28, 49, 42, 7, 42, 7, 70, 56, 7, 14, 28, 56, 35, 70, 35, 35, 28, 70, 42, 14, 14, 7, 70, 35, 21});

    S21Matrix result = matrix * 7;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber15) {
    
    S21Matrix matrix(2, 3);
    matrix.FillByMass(new double[6]{9, 8, 7, 7, 1, 3});

    S21Matrix expectedMul(2, 3);
    expectedMul.FillByMass(new double[6]{54, 48, 42, 42, 6, 18});

    S21Matrix result = matrix;
    result*= 6;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber16) {
    
    S21Matrix matrix(6, 3);
    matrix.FillByMass(new double[18]{1, 5, 2, 5, 6, 9, 7, 5, 8, 5, 4, 2, 2, 9, 1, 1, 6, 8});

    S21Matrix expectedMul(6, 3);
    expectedMul.FillByMass(new double[18]{6, 30, 12, 30, 36, 54, 42, 30, 48, 30, 24, 12, 12, 54, 6, 6, 36, 48});

    S21Matrix result = matrix * 6;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber17) {
    
    S21Matrix matrix(3, 2);
    matrix.FillByMass(new double[6]{7, 2, 9, 7, 5, 1});

    S21Matrix expectedMul(3, 2);
    expectedMul.FillByMass(new double[6]{63, 18, 81, 63, 45, 9});

    S21Matrix result = matrix;
    result*= 9;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber18) {
    
    S21Matrix matrix(3, 3);
    matrix.FillByMass(new double[9]{9, 10, 2, 4, 2, 4, 4, 1, 3});

    S21Matrix expectedMul(3, 3);
    expectedMul.FillByMass(new double[9]{72, 80, 16, 32, 16, 32, 32, 8, 24});

    S21Matrix result = matrix * 8;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber19) {
    
    S21Matrix matrix(3, 4);
    matrix.FillByMass(new double[12]{8, 1, 1, 6, 6, 4, 10, 6, 1, 10, 9, 7});

    S21Matrix expectedMul(3, 4);
    expectedMul.FillByMass(new double[12]{48, 6, 6, 36, 36, 24, 60, 36, 6, 60, 54, 42});

    S21Matrix result = matrix;
    result*= 6;
    
    ASSERT_TRUE(result == expectedMul);
}

TEST(MatrixMulNumberTest, MulNumber20) {
    
    S21Matrix matrix(2, 5);
    matrix.FillByMass(new double[10]{9, 6, 4, 3, 6, 7, 1, 9, 4, 6});

    S21Matrix expectedMul(2, 5);
    expectedMul.FillByMass(new double[10]{36, 24, 16, 12, 24, 28, 4, 36, 16, 24});

    S21Matrix result = matrix;
    result*= 4;
    
    ASSERT_TRUE(result == expectedMul);
}
