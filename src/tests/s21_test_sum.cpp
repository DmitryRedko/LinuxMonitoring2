#include "s21_test.h"


TEST(MatrixSumTest, SumMatrix1) {
    
    S21Matrix matrix1(5, 2);
    matrix1.FillByMass(new double[10]{6.48, 9.06, 1.45, 6.18, 3.95, 3.09, 6.72, 4.62, 4.11, 8.8});

    S21Matrix matrix2(5, 2);
    matrix2.FillByMass(new double[10]{4.42, 7.96, 3.8, 7.33, 6.19, 2.1, 6.38, 4.15, 7.89, 6.13});

    S21Matrix expectedSum(5, 2);
    expectedSum.FillByMass(new double[10]{10.9, 17.02, 5.25, 13.51, 10.14, 5.19, 13.1, 8.77, 12.0, 14.93});

    S21Matrix result = matrix1;
    result+=matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix2) {
    
    S21Matrix matrix1(6, 3);
    matrix1.FillByMass(new double[18]{5.37, 4.04, 1.22, 6.45, 4.0, 3.6, 6.07, 5.65, 6.79, 4.57, 2.08, 5.42, 9.96, 9.74, 2.71, 2.9, 2.8, 5.39});

    S21Matrix matrix2(6, 3);
    matrix2.FillByMass(new double[18]{3.31, 8.05, 4.87, 2.7, 2.4, 3.3, 2.55, 7.72, 2.39, 4.46, 9.6, 9.02, 4.31, 4.64, 4.95, 1.7, 7.55, 5.86});

    S21Matrix expectedSum(6, 3);
    expectedSum.FillByMass(new double[18]{8.68, 12.09, 6.09, 9.15, 6.4, 6.9, 8.62, 13.37, 9.18, 9.03, 11.68, 14.44, 14.27, 14.38, 7.66, 4.6, 10.35, 11.25});

    S21Matrix result = matrix1;
    result+=matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix3) {
    
    S21Matrix matrix1(5, 5);
    matrix1.FillByMass(new double[25]{7.69, 4.89, 9.37, 4.19, 6.12, 3.55, 3.89, 1.81, 5.37, 2.74, 7.14, 3.63, 4.88, 1.83, 8.37, 3.64, 7.48, 9.94, 8.23, 2.09, 1.61, 5.58, 9.29, 3.57, 3.49});

    S21Matrix matrix2(5, 5);
    matrix2.FillByMass(new double[25]{7.82, 7.33, 2.51, 5.41, 1.68, 7.45, 1.73, 4.97, 6.99, 8.76, 4.54, 7.23, 2.35, 6.59, 5.11, 8.58, 5.54, 8.0, 8.31, 3.59, 2.97, 6.15, 7.08, 3.78, 2.06});

    S21Matrix expectedSum(5, 5);
    expectedSum.FillByMass(new double[25]{15.51, 12.22, 11.88, 9.6, 7.8, 11.0, 5.62, 6.78, 12.36, 11.5, 11.68, 10.86, 7.23, 8.42, 13.48, 12.22, 13.02, 17.94, 16.54, 5.68, 4.58, 11.73, 16.37, 7.35, 5.55});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix4) {
    
    S21Matrix matrix1(4, 5);
    matrix1.FillByMass(new double[20]{7.32, 6.1, 8.34, 3.82, 1.9, 3.53, 9.18, 1.13, 4.32, 2.03, 8.74, 4.7, 7.04, 4.94, 1.23, 3.91, 4.7, 4.77, 1.43, 6.07});

    S21Matrix matrix2(4, 5);
    matrix2.FillByMass(new double[20]{4.74, 7.23, 3.35, 8.4, 9.15, 6.58, 9.11, 4.45, 1.39, 4.45, 1.26, 8.93, 9.04, 4.82, 8.18, 5.52, 2.23, 8.57, 6.32, 8.69});

    S21Matrix expectedSum(4, 5);
    expectedSum.FillByMass(new double[20]{12.06, 13.33, 11.69, 12.22, 11.05, 10.11, 18.29, 5.58, 5.71, 6.48, 10.0, 13.63, 16.08, 9.76, 9.41, 9.43, 6.93, 13.34, 7.75, 14.76});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix5) {
    
    S21Matrix matrix1(5, 5);
    matrix1.FillByMass(new double[25]{3.41, 8.16, 9.33, 8.4, 8.02, 8.5, 3.16, 9.49, 9.27, 8.69, 5.24, 8.28, 8.02, 7.84, 2.88, 1.66, 7.78, 4.45, 2.38, 1.69, 2.98, 8.51, 5.0, 1.32, 5.64});

    S21Matrix matrix2(5, 5);
    matrix2.FillByMass(new double[25]{5.33, 2.96, 8.92, 6.0, 9.67, 9.32, 2.34, 7.27, 2.37, 3.29, 8.81, 1.12, 1.16, 5.06, 9.76, 8.78, 4.47, 7.63, 1.46, 9.14, 6.64, 3.48, 3.38, 9.66, 5.29});

    S21Matrix expectedSum(5, 5);
    expectedSum.FillByMass(new double[25]{8.74, 11.12, 18.25, 14.4, 17.69, 17.82, 5.5, 16.76, 11.64, 11.98, 14.05, 9.4, 9.18, 12.9, 12.64, 10.44, 12.25, 12.08, 3.84, 10.83, 9.62, 11.99, 8.38, 10.98, 10.93});

    S21Matrix result = matrix1;
    result+=matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix6) {
    
    S21Matrix matrix1(2, 5);
    matrix1.FillByMass(new double[10]{2.26, 5.39, 5.96, 4.37, 3.56, 5.33, 9.49, 6.37, 9.0, 8.13});

    S21Matrix matrix2(2, 5);
    matrix2.FillByMass(new double[10]{8.67, 4.45, 5.72, 3.11, 2.28, 1.31, 9.28, 2.97, 9.43, 4.6});

    S21Matrix expectedSum(2, 5);
    expectedSum.FillByMass(new double[10]{10.93, 9.84, 11.68, 7.48, 5.84, 6.64, 18.77, 9.34, 18.43, 12.73});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix7) {
    
    S21Matrix matrix1(5, 3);
    matrix1.FillByMass(new double[15]{5.9, 9.82, 9.52, 6.9, 7.04, 2.97, 6.63, 5.96, 9.45, 8.4, 8.15, 2.93, 4.83, 8.99, 6.16});

    S21Matrix matrix2(5, 3);
    matrix2.FillByMass(new double[15]{7.1, 1.04, 2.35, 1.74, 1.69, 2.48, 7.63, 6.73, 6.24, 1.26, 8.57, 2.46, 9.51, 4.91, 4.21});

    S21Matrix expectedSum(5, 3);
    expectedSum.FillByMass(new double[15]{13.0, 10.86, 11.87, 8.64, 8.73, 5.45, 14.26, 12.69, 15.69, 9.66, 16.72, 5.39, 14.34, 13.9, 10.37});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix8) {
    
    S21Matrix matrix1(3, 6);
    matrix1.FillByMass(new double[18]{8.8, 2.92, 2.54, 8.53, 8.9, 9.51, 4.15, 9.74, 1.18, 6.95, 1.93, 8.4, 4.04, 2.9, 1.42, 3.3, 9.7, 4.9});

    S21Matrix matrix2(3, 6);
    matrix2.FillByMass(new double[18]{9.33, 5.03, 7.66, 3.39, 9.51, 5.62, 4.67, 1.19, 7.42, 6.55, 3.13, 4.39, 6.97, 4.54, 1.47, 5.5, 8.3, 5.06});

    S21Matrix expectedSum(3, 6);
    expectedSum.FillByMass(new double[18]{18.13, 7.95, 10.2, 11.92, 18.41, 15.13, 8.82, 10.93, 8.6, 13.5, 5.06, 12.79, 11.01, 7.44, 2.89, 8.8, 18.0, 9.96});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix9) {
    
    S21Matrix matrix1(3, 6);
    matrix1.FillByMass(new double[18]{4.12, 8.51, 7.67, 9.1, 9.5, 8.56, 8.48, 7.26, 8.94, 7.7, 5.85, 4.98, 8.73, 5.09, 9.49, 9.4, 5.34, 8.32});

    S21Matrix matrix2(3, 6);
    matrix2.FillByMass(new double[18]{6.65, 6.13, 2.76, 3.69, 6.25, 4.35, 2.73, 8.07, 1.03, 6.39, 3.18, 6.22, 3.91, 2.03, 3.07, 3.12, 4.91, 7.68});

    S21Matrix expectedSum(3, 6);
    expectedSum.FillByMass(new double[18]{10.77, 14.64, 10.43, 12.79, 15.75, 12.91, 11.21, 15.33, 9.97, 14.09, 9.03, 11.2, 12.64, 7.12, 12.56, 12.52, 10.25, 16.0});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix10) {
    
    S21Matrix matrix1(4, 6);
    matrix1.FillByMass(new double[24]{5.05, 4.47, 7.05, 2.1, 4.76, 3.82, 7.23, 6.33, 3.96, 8.33, 8.58, 3.07, 6.05, 5.0, 4.47, 7.27, 9.18, 5.98, 1.49, 4.46, 9.58, 6.7, 9.8, 6.76});

    S21Matrix matrix2(4, 6);
    matrix2.FillByMass(new double[24]{2.79, 7.64, 9.4, 1.67, 1.75, 8.57, 4.64, 8.16, 2.78, 8.44, 5.06, 8.84, 9.92, 3.12, 7.03, 6.21, 2.41, 6.86, 5.34, 9.61, 2.41, 5.55, 3.87, 5.01});

    S21Matrix expectedSum(4, 6);
    expectedSum.FillByMass(new double[24]{7.84, 12.11, 16.45, 3.77, 6.51, 12.39, 11.87, 14.49, 6.74, 16.77, 13.64, 11.91, 15.97, 8.12, 11.5, 13.48, 11.59, 12.84, 6.83, 14.07, 11.99, 12.25, 13.67, 11.77});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix11) {
    
    S21Matrix matrix1(6, 6);
    matrix1.FillByMass(new double[36]{2.86, 3.35, 2.24, 3.81, 6.67, 3.12, 1.09, 2.84, 1.28, 3.58, 1.94, 7.43, 5.64, 4.71, 9.49, 9.71, 8.96, 6.64, 9.28, 5.11, 5.97, 1.38, 5.39, 1.97, 1.01, 6.83, 1.46, 1.36, 9.45, 4.33, 7.69, 5.0, 3.69, 2.77, 2.08, 4.13});

    S21Matrix matrix2(6, 6);
    matrix2.FillByMass(new double[36]{7.12, 8.3, 9.91, 9.95, 5.41, 8.31, 2.27, 5.08, 5.76, 3.64, 7.53, 6.77, 8.1, 7.21, 3.49, 5.05, 3.29, 6.13, 1.88, 3.27, 4.2, 9.84, 1.09, 8.21, 5.24, 1.84, 4.66, 9.89, 1.03, 9.95, 3.65, 7.87, 2.94, 8.24, 8.95, 4.92});

    S21Matrix expectedSum(6, 6);
    expectedSum.FillByMass(new double[36]{9.98, 11.65, 12.15, 13.76, 12.08, 11.43, 3.36, 7.92, 7.04, 7.22, 9.47, 14.2, 13.74, 11.92, 12.98, 14.76, 12.25, 12.77, 11.16, 8.38, 10.17, 11.22, 6.48, 10.18, 6.25, 8.67, 6.12, 11.25, 10.48, 14.28, 11.34, 12.87, 6.63, 11.01, 11.03, 9.05});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix12) {
    
    S21Matrix matrix1(5, 6);
    matrix1.FillByMass(new double[30]{4.01, 9.66, 4.21, 8.38, 6.36, 3.92, 2.1, 1.15, 6.5, 1.68, 7.56, 5.44, 8.99, 1.86, 8.19, 5.3, 2.79, 4.24, 3.5, 9.29, 4.64, 5.31, 6.34, 2.48, 3.22, 5.78, 2.75, 6.94, 1.14, 7.05});

    S21Matrix matrix2(5, 6);
    matrix2.FillByMass(new double[30]{5.1, 8.36, 1.67, 5.74, 7.54, 9.85, 8.05, 1.1, 3.95, 4.6, 6.49, 5.08, 2.32, 6.97, 5.72, 7.08, 1.58, 2.46, 4.26, 2.78, 1.19, 7.02, 3.16, 9.81, 5.55, 5.6, 2.93, 5.98, 8.57, 3.89});

    S21Matrix expectedSum(5, 6);
    expectedSum.FillByMass(new double[30]{9.11, 18.02, 5.88, 14.12, 13.9, 13.77, 10.15, 2.25, 10.45, 6.28, 14.05, 10.52, 11.31, 8.83, 13.91, 12.38, 4.37, 6.7, 7.76, 12.07, 5.83, 12.33, 9.5, 12.29, 8.77, 11.38, 5.68, 12.92, 9.71, 10.94});

    S21Matrix result = matrix1;
    result+=matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix13) {
    
    S21Matrix matrix1(5, 4);
    matrix1.FillByMass(new double[20]{7.94, 9.28, 4.28, 1.76, 4.36, 9.42, 5.4, 8.17, 4.67, 8.99, 2.4, 9.0, 1.86, 9.84, 6.1, 1.03, 6.81, 1.82, 4.98, 5.98});

    S21Matrix matrix2(5, 4);
    matrix2.FillByMass(new double[20]{1.55, 5.55, 5.61, 5.34, 4.91, 9.25, 6.88, 3.42, 6.58, 7.71, 5.03, 7.96, 4.18, 8.98, 1.87, 9.34, 1.37, 3.08, 5.72, 8.62});

    S21Matrix expectedSum(5, 4);
    expectedSum.FillByMass(new double[20]{9.49, 14.83, 9.89, 7.1, 9.27, 18.67, 12.28, 11.59, 11.25, 16.7, 7.43, 16.96, 6.04, 18.82, 7.97, 10.37, 8.18, 4.9, 10.7, 14.6});

    S21Matrix result = matrix1;
    result+=matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix14) {
    
    S21Matrix matrix1(6, 2);
    matrix1.FillByMass(new double[12]{8.76, 5.24, 1.82, 5.22, 3.37, 8.98, 8.92, 6.03, 6.73, 9.75, 3.01, 7.52});

    S21Matrix matrix2(6, 2);
    matrix2.FillByMass(new double[12]{5.66, 3.08, 7.58, 1.48, 7.8, 8.46, 7.08, 4.48, 2.07, 8.68, 8.67, 9.05});

    S21Matrix expectedSum(6, 2);
    expectedSum.FillByMass(new double[12]{14.42, 8.32, 9.4, 6.7, 11.17, 17.44, 16.0, 10.51, 8.8, 18.43, 11.68, 16.57});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix15) {
    
    S21Matrix matrix1(4, 3);
    matrix1.FillByMass(new double[12]{9.03, 8.93, 1.6, 7.69, 3.08, 7.73, 3.59, 8.98, 8.82, 2.13, 3.6, 3.8});

    S21Matrix matrix2(4, 3);
    matrix2.FillByMass(new double[12]{1.91, 3.72, 4.71, 9.7, 3.28, 1.81, 8.81, 5.64, 8.48, 3.11, 9.48, 6.23});

    S21Matrix expectedSum(4, 3);
    expectedSum.FillByMass(new double[12]{10.94, 12.65, 6.31, 17.39, 6.36, 9.54, 12.4, 14.62, 17.3, 5.24, 13.08, 10.03});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix16) {
    
    S21Matrix matrix1(4, 4);
    matrix1.FillByMass(new double[16]{9.86, 8.5, 5.03, 1.23, 6.55, 4.99, 2.83, 6.61, 3.45, 4.88, 3.05, 6.79, 7.17, 3.51, 9.33, 9.85});

    S21Matrix matrix2(4, 4);
    matrix2.FillByMass(new double[16]{6.16, 5.92, 3.66, 1.7, 6.87, 5.32, 1.09, 6.95, 2.6, 8.04, 7.66, 7.51, 7.16, 5.11, 5.59, 2.04});

    S21Matrix expectedSum(4, 4);
    expectedSum.FillByMass(new double[16]{16.02, 14.42, 8.69, 2.93, 13.42, 10.31, 3.92, 13.56, 6.05, 12.92, 10.71, 14.3, 14.33, 8.62, 14.92, 11.89});

    S21Matrix result = matrix1;
    result+=matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix17) {
    
    S21Matrix matrix1(5, 6);
    matrix1.FillByMass(new double[30]{4.08, 4.91, 9.81, 9.72, 4.8, 5.82, 8.68, 9.92, 6.57, 5.45, 8.28, 9.4, 2.89, 7.48, 1.03, 3.64, 5.15, 2.87, 7.46, 5.29, 3.81, 5.66, 1.52, 2.38, 7.95, 3.75, 9.31, 7.25, 3.38, 3.28});

    S21Matrix matrix2(5, 6);
    matrix2.FillByMass(new double[30]{7.16, 9.43, 2.71, 2.97, 2.42, 7.55, 3.54, 9.51, 4.69, 7.08, 8.81, 4.94, 4.18, 5.62, 3.49, 4.71, 1.22, 3.33, 9.44, 5.51, 5.52, 3.07, 4.27, 7.54, 3.27, 2.88, 7.21, 3.88, 1.16, 9.54});

    S21Matrix expectedSum(5, 6);
    expectedSum.FillByMass(new double[30]{11.24, 14.34, 12.52, 12.69, 7.22, 13.37, 12.22, 19.43, 11.26, 12.53, 17.09, 14.34, 7.07, 13.1, 4.52, 8.35, 6.37, 6.2, 16.9, 10.8, 9.33, 8.73, 5.79, 9.92, 11.22, 6.63, 16.52, 11.13, 4.54, 12.82});

    S21Matrix result = matrix1;
    result+=matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix18) {
    
    S21Matrix matrix1(6, 2);
    matrix1.FillByMass(new double[12]{9.91, 1.34, 7.59, 7.25, 8.66, 9.79, 6.53, 2.12, 7.25, 8.52, 6.88, 4.46});

    S21Matrix matrix2(6, 2);
    matrix2.FillByMass(new double[12]{8.94, 3.62, 6.89, 3.65, 9.03, 3.28, 6.66, 1.31, 5.84, 4.83, 3.93, 8.15});

    S21Matrix expectedSum(6, 2);
    expectedSum.FillByMass(new double[12]{18.85, 4.96, 14.48, 10.9, 17.69, 13.07, 13.19, 3.43, 13.09, 13.35, 10.81, 12.61});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix19) {
    
    S21Matrix matrix1(4, 6);
    matrix1.FillByMass(new double[24]{6.16, 3.68, 7.91, 8.9, 6.85, 9.09, 7.41, 5.0, 7.43, 4.25, 7.17, 2.7, 4.56, 8.84, 2.01, 1.89, 4.66, 2.21, 4.61, 7.18, 5.49, 7.49, 1.12, 3.98});

    S21Matrix matrix2(4, 6);
    matrix2.FillByMass(new double[24]{1.14, 5.48, 5.38, 9.71, 3.66, 7.68, 6.42, 5.09, 1.98, 9.62, 7.93, 1.9, 6.08, 7.3, 4.62, 2.1, 8.48, 4.62, 3.68, 4.98, 1.92, 1.94, 2.79, 6.66});

    S21Matrix expectedSum(4, 6);
    expectedSum.FillByMass(new double[24]{7.3, 9.16, 13.29, 18.61, 10.51, 16.77, 13.83, 10.09, 9.41, 13.87, 15.1, 4.6, 10.64, 16.14, 6.63, 3.99, 13.14, 6.83, 8.29, 12.16, 7.41, 9.43, 3.91, 10.64});

    S21Matrix result = matrix1;
    result+=matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}

TEST(MatrixSumTest, SumMatrix20) {
    
    S21Matrix matrix1(2, 4);
    matrix1.FillByMass(new double[8]{9.67, 7.5, 4.67, 1.18, 7.06, 8.87, 1.88, 1.93});

    S21Matrix matrix2(2, 4);
    matrix2.FillByMass(new double[8]{5.6, 4.3, 2.71, 4.38, 1.07, 3.96, 6.11, 8.53});

    S21Matrix expectedSum(2, 4);
    expectedSum.FillByMass(new double[8]{15.27, 11.8, 7.38, 5.56, 8.13, 12.83, 7.99, 10.46});

    S21Matrix result = matrix1 + matrix2;
    
    ASSERT_TRUE(result == expectedSum);
}
