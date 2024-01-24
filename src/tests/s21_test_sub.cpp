#include "s21_test.h"


TEST(MatrixSubTest, SubMatrix1) {
    
    S21Matrix matrix1(4, 3);
    matrix1.FillByMass(new double[12]{5.11, 1.7, 1.22, 9.42, 7.77, 9.52, 9.3, 7.86, 8.34, 8.04, 3.37, 5.64});

    S21Matrix matrix2(4, 3);
    matrix2.FillByMass(new double[12]{4.96, 8.18, 5.08, 8.4, 9.56, 2.21, 8.78, 6.81, 5.15, 2.96, 9.36, 5.35});

    S21Matrix expectedSub(4, 3);
    expectedSub.FillByMass(new double[12]{0.15, -6.48, -3.86, 1.02, -1.79, 7.31, 0.52, 1.05, 3.19, 5.08, -5.99, 0.29});

    S21Matrix result = matrix1 - matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix2) {
    
    S21Matrix matrix1(3, 3);
    matrix1.FillByMass(new double[9]{6.77, 8.59, 7.38, 2.02, 7.09, 5.67, 7.41, 9.72, 3.25});

    S21Matrix matrix2(3, 3);
    matrix2.FillByMass(new double[9]{5.1, 1.13, 9.96, 4.27, 8.89, 7.84, 9.92, 4.39, 3.97});

    S21Matrix expectedSub(3, 3);
    expectedSub.FillByMass(new double[9]{1.67, 7.46, -2.58, -2.25, -1.8, -2.17, -2.51, 5.33, -0.72});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix3) {
    
    S21Matrix matrix1(6, 2);
    matrix1.FillByMass(new double[12]{2.39, 6.62, 2.62, 7.27, 4.14, 3.94, 5.65, 3.69, 3.91, 8.2, 3.59, 4.73});

    S21Matrix matrix2(6, 2);
    matrix2.FillByMass(new double[12]{5.01, 3.06, 8.42, 4.43, 8.33, 4.84, 8.9, 6.4, 6.54, 5.26, 2.7, 4.61});

    S21Matrix expectedSub(6, 2);
    expectedSub.FillByMass(new double[12]{-2.62, 3.56, -5.8, 2.84, -4.19, -0.9, -3.25, -2.71, -2.63, 2.94, 0.89, 0.12});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix4) {
    
    S21Matrix matrix1(3, 3);
    matrix1.FillByMass(new double[9]{5.26, 6.52, 8.72, 3.41, 8.52, 1.69, 4.7, 9.49, 5.82});

    S21Matrix matrix2(3, 3);
    matrix2.FillByMass(new double[9]{8.15, 9.19, 1.39, 7.48, 8.67, 8.27, 8.91, 9.86, 4.24});

    S21Matrix expectedSub(3, 3);
    expectedSub.FillByMass(new double[9]{-2.89, -2.67, 7.33, -4.07, -0.15, -6.58, -4.21, -0.37, 1.58});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix5) {
    
    S21Matrix matrix1(5, 5);
    matrix1.FillByMass(new double[25]{4.38, 7.01, 9.89, 4.1, 8.09, 8.81, 9.1, 8.28, 5.56, 7.81, 4.38, 8.62, 7.65, 5.37, 7.29, 3.58, 3.29, 8.39, 7.34, 1.33, 2.04, 8.28, 6.29, 9.17, 2.57});

    S21Matrix matrix2(5, 5);
    matrix2.FillByMass(new double[25]{5.43, 2.07, 3.81, 8.66, 8.68, 5.0, 5.15, 9.1, 2.35, 1.13, 7.34, 2.78, 4.22, 9.94, 8.37, 1.66, 8.51, 7.1, 8.18, 2.6, 3.95, 5.76, 3.57, 3.81, 5.84});

    S21Matrix expectedSub(5, 5);
    expectedSub.FillByMass(new double[25]{-1.05, 4.94, 6.08, -4.56, -0.59, 3.81, 3.95, -0.82, 3.21, 6.68, -2.96, 5.84, 3.43, -4.57, -1.08, 1.92, -5.22, 1.29, -0.84, -1.27, -1.91, 2.52, 2.72, 5.36, -3.27});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix6) {
    
    S21Matrix matrix1(3, 5);
    matrix1.FillByMass(new double[15]{1.73, 1.95, 8.9, 3.52, 4.97, 6.59, 7.08, 1.09, 6.04, 6.55, 5.17, 7.2, 1.46, 2.9, 1.47});

    S21Matrix matrix2(3, 5);
    matrix2.FillByMass(new double[15]{3.31, 1.62, 7.66, 3.19, 9.38, 2.91, 9.83, 2.94, 4.69, 3.03, 6.9, 4.65, 3.44, 7.19, 1.73});

    S21Matrix expectedSub(3, 5);
    expectedSub.FillByMass(new double[15]{-1.58, 0.33, 1.24, 0.33, -4.41, 3.68, -2.75, -1.85, 1.35, 3.52, -1.73, 2.55, -1.98, -4.29, -0.26});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix7) {
    
    S21Matrix matrix1(6, 2);
    matrix1.FillByMass(new double[12]{1.68, 1.2, 9.16, 2.25, 5.18, 3.67, 6.09, 7.67, 3.48, 4.21, 1.76, 4.99});

    S21Matrix matrix2(6, 2);
    matrix2.FillByMass(new double[12]{7.83, 6.75, 6.12, 7.65, 7.14, 3.65, 3.19, 6.27, 7.05, 1.82, 4.7, 7.48});

    S21Matrix expectedSub(6, 2);
    expectedSub.FillByMass(new double[12]{-6.15, -5.55, 3.04, -5.4, -1.96, 0.02, 2.9, 1.4, -3.57, 2.39, -2.94, -2.49});

    S21Matrix result = matrix1 - matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix8) {
    
    S21Matrix matrix1(6, 2);
    matrix1.FillByMass(new double[12]{7.77, 5.05, 8.6, 2.07, 1.58, 2.79, 3.75, 6.52, 6.84, 5.07, 2.39, 5.92});

    S21Matrix matrix2(6, 2);
    matrix2.FillByMass(new double[12]{3.27, 8.45, 2.66, 3.07, 9.08, 1.42, 7.34, 9.42, 7.38, 8.25, 6.46, 8.31});

    S21Matrix expectedSub(6, 2);
    expectedSub.FillByMass(new double[12]{4.5, -3.4, 5.94, -1.0, -7.5, 1.37, -3.59, -2.9, -0.54, -3.18, -4.07, -2.39});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix9) {
    
    S21Matrix matrix1(2, 5);
    matrix1.FillByMass(new double[10]{6.76, 2.03, 4.24, 6.57, 9.37, 9.05, 6.04, 1.09, 6.31, 5.87});

    S21Matrix matrix2(2, 5);
    matrix2.FillByMass(new double[10]{2.59, 4.92, 8.34, 5.49, 7.87, 6.33, 8.46, 3.87, 5.38, 7.79});

    S21Matrix expectedSub(2, 5);
    expectedSub.FillByMass(new double[10]{4.17, -2.89, -4.1, 1.08, 1.5, 2.72, -2.42, -2.78, 0.93, -1.92});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix10) {
    
    S21Matrix matrix1(3, 3);
    matrix1.FillByMass(new double[9]{8.29, 7.13, 9.4, 9.19, 6.56, 6.75, 2.16, 5.17, 8.27});

    S21Matrix matrix2(3, 3);
    matrix2.FillByMass(new double[9]{7.17, 2.8, 7.9, 1.49, 5.89, 9.97, 7.63, 1.64, 2.9});

    S21Matrix expectedSub(3, 3);
    expectedSub.FillByMass(new double[9]{1.12, 4.33, 1.5, 7.7, 0.67, -3.22, -5.47, 3.53, 5.37});

    S21Matrix result = matrix1 - matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix11) {
    
    S21Matrix matrix1(3, 2);
    matrix1.FillByMass(new double[6]{7.36, 5.64, 7.13, 7.08, 4.5, 2.93});

    S21Matrix matrix2(3, 2);
    matrix2.FillByMass(new double[6]{6.12, 9.67, 7.26, 9.14, 1.03, 3.44});

    S21Matrix expectedSub(3, 2);
    expectedSub.FillByMass(new double[6]{1.24, -4.03, -0.13, -2.06, 3.47, -0.51});

    S21Matrix result = matrix1 - matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix12) {
    
    S21Matrix matrix1(5, 5);
    matrix1.FillByMass(new double[25]{9.94, 2.1, 9.23, 7.12, 7.26, 6.5, 8.67, 3.8, 4.6, 6.41, 4.31, 9.46, 2.58, 5.07, 4.17, 2.88, 8.28, 6.96, 8.29, 1.77, 6.73, 5.15, 2.98, 8.14, 4.4});

    S21Matrix matrix2(5, 5);
    matrix2.FillByMass(new double[25]{1.17, 8.63, 8.44, 5.78, 2.75, 4.68, 8.2, 8.83, 7.9, 9.45, 9.38, 8.1, 9.82, 7.46, 4.06, 3.61, 1.56, 1.42, 1.08, 3.19, 4.24, 1.86, 1.66, 9.24, 3.98});

    S21Matrix expectedSub(5, 5);
    expectedSub.FillByMass(new double[25]{8.77, -6.53, 0.79, 1.34, 4.51, 1.82, 0.47, -5.03, -3.3, -3.04, -5.07, 1.36, -7.24, -2.39, 0.11, -0.73, 6.72, 5.54, 7.21, -1.42, 2.49, 3.29, 1.32, -1.1, 0.42});

    S21Matrix result = matrix1 - matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix13) {
    
    S21Matrix matrix1(4, 4);
    matrix1.FillByMass(new double[16]{9.45, 7.32, 6.02, 5.82, 8.85, 5.18, 2.49, 4.6, 4.45, 1.47, 5.3, 4.94, 6.49, 9.79, 9.06, 8.53});

    S21Matrix matrix2(4, 4);
    matrix2.FillByMass(new double[16]{2.02, 7.18, 2.26, 6.45, 8.69, 6.68, 7.55, 7.87, 5.44, 1.96, 7.73, 6.32, 2.51, 1.39, 5.67, 5.35});

    S21Matrix expectedSub(4, 4);
    expectedSub.FillByMass(new double[16]{7.43, 0.14, 3.76, -0.63, 0.16, -1.5, -5.06, -3.27, -0.99, -0.49, -2.43, -1.38, 3.98, 8.4, 3.39, 3.18});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix14) {
    
    S21Matrix matrix1(4, 3);
    matrix1.FillByMass(new double[12]{4.1, 1.42, 9.84, 7.98, 6.82, 3.82, 2.36, 1.88, 1.77, 9.62, 7.31, 4.72});

    S21Matrix matrix2(4, 3);
    matrix2.FillByMass(new double[12]{1.38, 9.77, 5.18, 9.89, 2.51, 5.75, 6.49, 3.72, 3.14, 6.29, 1.56, 2.37});

    S21Matrix expectedSub(4, 3);
    expectedSub.FillByMass(new double[12]{2.72, -8.35, 4.66, -1.91, 4.31, -1.93, -4.13, -1.84, -1.37, 3.33, 5.75, 2.35});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix15) {
    
    S21Matrix matrix1(3, 5);
    matrix1.FillByMass(new double[15]{5.66, 7.87, 8.42, 5.42, 3.05, 6.82, 2.76, 2.76, 7.64, 6.13, 7.23, 7.13, 2.53, 6.54, 5.06});

    S21Matrix matrix2(3, 5);
    matrix2.FillByMass(new double[15]{4.94, 3.34, 1.05, 4.29, 7.87, 5.14, 4.04, 4.64, 1.3, 1.01, 2.53, 5.37, 8.0, 1.86, 9.06});

    S21Matrix expectedSub(3, 5);
    expectedSub.FillByMass(new double[15]{0.72, 4.53, 7.37, 1.13, -4.82, 1.68, -1.28, -1.88, 6.34, 5.12, 4.7, 1.76, -5.47, 4.68, -4.0});

    S21Matrix result = matrix1 - matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix16) {
    
    S21Matrix matrix1(5, 2);
    matrix1.FillByMass(new double[10]{5.28, 9.04, 3.48, 3.51, 6.35, 4.3, 3.5, 8.66, 4.2, 8.47});

    S21Matrix matrix2(5, 2);
    matrix2.FillByMass(new double[10]{7.06, 3.89, 9.63, 8.82, 9.6, 7.5, 5.1, 3.94, 9.44, 1.72});

    S21Matrix expectedSub(5, 2);
    expectedSub.FillByMass(new double[10]{-1.78, 5.15, -6.15, -5.31, -3.25, -3.2, -1.6, 4.72, -5.24, 6.75});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix17) {
    
    S21Matrix matrix1(6, 3);
    matrix1.FillByMass(new double[18]{4.71, 6.06, 6.63, 1.86, 4.25, 9.97, 1.6, 1.04, 4.55, 5.68, 4.53, 5.73, 5.77, 6.99, 2.06, 9.39, 8.38, 5.54});

    S21Matrix matrix2(6, 3);
    matrix2.FillByMass(new double[18]{7.88, 7.17, 2.15, 9.29, 6.09, 7.86, 5.88, 5.39, 8.72, 5.24, 1.66, 6.26, 2.27, 8.37, 5.33, 8.84, 7.45, 3.42});

    S21Matrix expectedSub(6, 3);
    expectedSub.FillByMass(new double[18]{-3.17, -1.11, 4.48, -7.43, -1.84, 2.11, -4.28, -4.35, -4.17, 0.44, 2.87, -0.53, 3.5, -1.38, -3.27, 0.55, 0.93, 2.12});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix18) {
    
    S21Matrix matrix1(3, 5);
    matrix1.FillByMass(new double[15]{1.84, 4.05, 4.3, 5.17, 5.36, 2.09, 6.53, 2.19, 4.75, 1.17, 1.02, 3.13, 2.14, 2.69, 9.33});

    S21Matrix matrix2(3, 5);
    matrix2.FillByMass(new double[15]{7.12, 5.59, 1.75, 6.94, 9.77, 1.64, 8.23, 7.41, 9.96, 9.59, 7.09, 2.51, 9.79, 8.4, 6.24});

    S21Matrix expectedSub(3, 5);
    expectedSub.FillByMass(new double[15]{-5.28, -1.54, 2.55, -1.77, -4.41, 0.45, -1.7, -5.22, -5.21, -8.42, -6.07, 0.62, -7.65, -5.71, 3.09});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix19) {
    
    S21Matrix matrix1(3, 6);
    matrix1.FillByMass(new double[18]{5.51, 8.38, 5.94, 2.2, 1.82, 4.29, 4.4, 3.96, 2.96, 8.41, 3.95, 1.37, 8.79, 4.16, 4.92, 4.12, 1.65, 4.69});

    S21Matrix matrix2(3, 6);
    matrix2.FillByMass(new double[18]{4.07, 2.36, 2.76, 2.2, 8.74, 7.84, 3.71, 8.96, 6.28, 4.35, 6.72, 1.17, 2.73, 3.35, 4.55, 9.0, 3.43, 6.37});

    S21Matrix expectedSub(3, 6);
    expectedSub.FillByMass(new double[18]{1.44, 6.02, 3.18, 0.0, -6.92, -3.55, 0.69, -5.0, -3.32, 4.06, -2.77, 0.2, 6.06, 0.81, 0.37, -4.88, -1.78, -1.68});

    S21Matrix result = matrix1 - matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}

TEST(MatrixSubTest, SubMatrix20) {
    
    S21Matrix matrix1(5, 6);
    matrix1.FillByMass(new double[30]{4.49, 3.71, 7.88, 2.32, 9.26, 4.65, 5.99, 4.02, 4.32, 1.19, 7.69, 4.34, 3.45, 3.14, 7.21, 3.59, 7.17, 5.53, 3.23, 1.29, 9.42, 2.51, 4.87, 5.17, 7.78, 3.19, 9.99, 4.93, 7.82, 2.59});

    S21Matrix matrix2(5, 6);
    matrix2.FillByMass(new double[30]{1.09, 5.26, 9.19, 8.06, 6.35, 7.52, 2.16, 7.8, 8.09, 1.66, 1.12, 4.27, 2.44, 1.37, 5.53, 4.09, 9.16, 6.2, 7.94, 5.23, 2.66, 4.16, 5.73, 5.05, 4.53, 8.16, 2.51, 9.07, 5.14, 4.41});

    S21Matrix expectedSub(5, 6);
    expectedSub.FillByMass(new double[30]{3.4, -1.55, -1.31, -5.74, 2.91, -2.87, 3.83, -3.78, -3.77, -0.47, 6.57, 0.07, 1.01, 1.77, 1.68, -0.5, -1.99, -0.67, -4.71, -3.94, 6.76, -1.65, -0.86, 0.12, 3.25, -4.97, 7.48, -4.14, 2.68, -1.82});

    S21Matrix result = matrix1;
    result-= matrix2;
    
    ASSERT_TRUE(result == expectedSub);
}
