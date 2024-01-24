#include "s21_test.h"


TEST(MatrixEqualityTest, EqualityCheck1) {
    
    // Создаем две матрицы с одинаковыми значениями
    S21Matrix matrix1(4, 5);
    matrix1.FillByMass(new double[20]{5.56, 8.01, 9.01, 1.98, 8.43, 8.46, 6.89, 8.63, 3.05, 3.28, 1.57, 6.73, 1.78, 3.76, 6.91, 1.46, 9.37, 4.27, 8.24, 5.18});

    S21Matrix matrix2(4, 5);
    matrix2.FillByMass(new double[20]{5.56, 8.01, 9.01, 1.98, 8.43, 8.46, 6.89, 8.63, 3.05, 3.28, 1.57, 6.73, 1.78, 3.76, 6.91, 1.46, 9.37, 4.27, 8.24, 5.18});

    ASSERT_TRUE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck2) {
    
    // Создаем две матрицы с одинаковыми значениями
    S21Matrix matrix1(3, 3);
    matrix1.FillByMass(new double[9]{4.87, 9.18, 9.37, 1.79, 7.11, 7.67, 5.85, 1.81, 3.55});

    S21Matrix matrix2(3, 3);
    matrix2.FillByMass(new double[9]{4.87, 9.18, 9.37, 1.79, 7.11, 7.67, 5.85, 1.81, 3.55});

    ASSERT_TRUE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck3) {
    
    // Создаем две матрицы с одинаковыми значениями
    S21Matrix matrix1(2, 6);
    matrix1.FillByMass(new double[12]{2.74, 1.45, 5.91, 1.0, 6.04, 2.6, 4.09, 9.64, 4.73, 4.11, 4.74, 6.24});

    S21Matrix matrix2(2, 6);
    matrix2.FillByMass(new double[12]{2.74, 1.45, 5.91, 1.0, 6.04, 2.6, 4.09, 9.64, 4.73, 4.11, 4.74, 6.24});

    ASSERT_TRUE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck4) {
    
    // Создаем две матрицы с одинаковыми значениями
    S21Matrix matrix1(4, 4);
    matrix1.FillByMass(new double[16]{7.79, 9.87, 3.57, 3.3, 2.2, 2.2, 1.18, 5.71, 7.59, 7.82, 1.11, 1.54, 5.67, 9.35, 9.02, 6.5});

    S21Matrix matrix2(4, 4);
    matrix2.FillByMass(new double[16]{7.79, 9.87, 3.57, 3.3, 2.2, 2.2, 1.18, 5.71, 7.59, 7.82, 1.11, 1.54, 5.67, 9.35, 9.02, 6.5});

    ASSERT_TRUE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck5) {
    
    S21Matrix matrix1(6, 6);
    matrix1.FillByMass(new double[36]{4.64, 7.13, 8.4, 6.14, 2.0, 8.13, 8.47, 3.51, 3.63, 4.38, 1.75, 8.49, 5.73, 4.54, 8.93, 6.99, 5.4, 8.69, 8.24, 6.41, 6.97, 9.98, 1.91, 9.59, 4.41, 8.8, 6.56, 2.97, 7.82, 8.85, 7.0, 8.78, 4.99, 9.09, 6.63, 4.22});

    S21Matrix matrix2(6, 6);
    matrix2.FillByMass(new double[36]{4.69, 1.87, 5.21, 7.2, 5.86, 9.87, 2.23, 7.67, 8.8, 2.48, 7.85, 5.06, 3.13, 1.52, 6.99, 1.05, 2.69, 4.63, 7.49, 1.4, 4.57, 3.54, 2.06, 5.84, 6.79, 6.23, 4.32, 8.57, 1.67, 3.49, 6.34, 7.19, 2.05, 8.79, 6.53, 6.37});

    ASSERT_FALSE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck6) {
    
    S21Matrix matrix1(2, 5);
    matrix1.FillByMass(new double[10]{8.34, 7.07, 2.73, 2.73, 6.52, 9.18, 9.74, 9.89, 2.94, 2.59});

    S21Matrix matrix2(3, 6);
    matrix2.FillByMass(new double[12]{8.39, 5.2, 9.95, 3.46, 2.04, 1.19, 6.01, 3.75, 2.0, 1.2, 6.78, 5.42});

    ASSERT_FALSE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck7) {
    
    S21Matrix matrix1(4, 5);
    matrix1.FillByMass(new double[20]{4.29, 3.45, 8.29, 6.08, 2.71, 2.18, 1.51, 1.38, 7.33, 6.7, 9.06, 7.79, 4.67, 3.69, 2.35, 5.84, 8.32, 6.13, 5.0, 1.61});

    S21Matrix matrix2(4, 5);
    matrix2.FillByMass(new double[20]{3.06, 9.95, 2.18, 1.78, 8.99, 7.87, 2.25, 5.47, 2.58, 5.44, 8.89, 6.04, 6.32, 5.21, 7.82, 8.95, 2.71, 5.0, 8.91, 7.2});

    ASSERT_FALSE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck8) {
    
    // Создаем две матрицы с одинаковыми значениями
    S21Matrix matrix1(6, 5);
    matrix1.FillByMass(new double[30]{7.36, 3.05, 5.68, 6.87, 6.68, 3.32, 5.91, 6.99, 6.79, 6.73, 3.35, 8.3, 8.94, 7.64, 6.63, 4.18, 3.33, 4.6, 1.99, 6.67, 5.36, 2.13, 7.51, 7.44, 1.58, 8.72, 5.23, 1.81, 9.8, 7.54});

    S21Matrix matrix2(6, 5);
    matrix2.FillByMass(new double[30]{7.36, 3.05, 5.68, 6.87, 6.68, 3.32, 5.91, 6.99, 6.79, 6.73, 3.35, 8.3, 8.94, 7.64, 6.63, 4.18, 3.33, 4.6, 1.99, 6.67, 5.36, 2.13, 7.51, 7.44, 1.58, 8.72, 5.23, 1.81, 9.8, 7.54});

    ASSERT_TRUE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck9) {
    
    S21Matrix matrix1(3, 5);
    matrix1.FillByMass(new double[15]{4.69, 1.69, 6.95, 2.22, 6.08, 7.04, 6.43, 8.57, 6.48, 6.15, 7.54, 2.1, 7.5, 6.22, 6.76});

    S21Matrix matrix2(3, 5);
    matrix2.FillByMass(new double[15]{3.53, 3.31, 8.79, 9.82, 5.78, 4.58, 8.67, 7.43, 2.37, 2.23, 7.4, 2.05, 7.22, 3.11, 9.1});

    ASSERT_FALSE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck10) {
    
    // Создаем две матрицы с одинаковыми значениями
    S21Matrix matrix1(6, 3);
    matrix1.FillByMass(new double[18]{2.92, 8.14, 8.56, 7.96, 4.5, 8.43, 6.82, 8.81, 2.79, 3.69, 6.98, 9.21, 8.76, 9.65, 9.76, 7.23, 4.43, 3.99});

    S21Matrix matrix2(6, 3);
    matrix2.FillByMass(new double[18]{2.92, 8.14, 8.56, 7.96, 4.5, 8.43, 6.82, 8.81, 2.79, 3.69, 6.98, 9.21, 8.76, 9.65, 9.76, 7.23, 4.43, 3.99});

    ASSERT_TRUE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck11) {
    
    // Создаем две матрицы с одинаковыми значениями
    S21Matrix matrix1(3, 5);
    matrix1.FillByMass(new double[15]{9.29, 5.33, 3.31, 2.98, 6.22, 7.91, 7.95, 2.94, 6.44, 1.34, 4.33, 7.92, 6.99, 2.74, 7.41});

    S21Matrix matrix2(3, 5);
    matrix2.FillByMass(new double[15]{9.29, 5.33, 3.31, 2.98, 6.22, 7.91, 7.95, 2.94, 6.44, 1.34, 4.33, 7.92, 6.99, 2.74, 7.41});

    ASSERT_TRUE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck12) {
    
    // Создаем две матрицы с одинаковыми значениями
    S21Matrix matrix1(3, 3);
    matrix1.FillByMass(new double[9]{6.37, 6.95, 6.51, 4.47, 6.52, 9.15, 6.84, 1.41, 2.09});

    S21Matrix matrix2(3, 3);
    matrix2.FillByMass(new double[9]{6.37, 6.95, 6.51, 4.47, 6.52, 9.15, 6.84, 1.41, 2.09});

    ASSERT_TRUE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck13) {
    
    S21Matrix matrix1(5, 3);
    matrix1.FillByMass(new double[15]{5.67, 8.61, 5.27, 9.93, 5.85, 4.11, 8.68, 7.09, 1.5, 5.03, 5.48, 8.39, 3.4, 5.69, 3.3});

    S21Matrix matrix2(6, 4);
    matrix2.FillByMass(new double[17]{9.89, 9.92, 6.33, 1.66, 6.57, 2.95, 2.08, 9.19, 3.66, 5.18, 5.91, 1.55, 4.53, 9.96, 9.83, 4.15, 8.53});

    ASSERT_FALSE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck14) {
    
    // Создаем две матрицы с одинаковыми значениями
    S21Matrix matrix1(3, 6);
    matrix1.FillByMass(new double[18]{1.97, 2.18, 5.51, 8.75, 9.91, 7.7, 4.91, 4.55, 8.15, 2.49, 1.74, 8.26, 5.67, 4.68, 5.39, 7.98, 1.47, 7.68});

    S21Matrix matrix2(3, 6);
    matrix2.FillByMass(new double[18]{1.97, 2.18, 5.51, 8.75, 9.91, 7.7, 4.91, 4.55, 8.15, 2.49, 1.74, 8.26, 5.67, 4.68, 5.39, 7.98, 1.47, 7.68});

    ASSERT_TRUE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck15) {
    
    S21Matrix matrix1(4, 2);
    matrix1.FillByMass(new double[8]{7.58, 9.0, 7.81, 5.94, 1.57, 6.01, 5.95, 8.68});

    S21Matrix matrix2(4, 2);
    matrix2.FillByMass(new double[8]{2.54, 7.88, 5.11, 7.38, 4.58, 3.35, 1.87, 6.4});

    ASSERT_FALSE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck16) {
    
    S21Matrix matrix1(6, 5);
    matrix1.FillByMass(new double[30]{1.41, 4.45, 2.34, 2.16, 3.75, 2.02, 7.72, 6.99, 6.26, 9.54, 8.77, 1.33, 6.47, 4.51, 8.89, 5.13, 9.23, 1.95, 2.7, 4.86, 2.75, 4.95, 1.91, 2.62, 5.14, 4.92, 1.62, 9.89, 1.04, 8.31});

    S21Matrix matrix2(6, 5);
    matrix2.FillByMass(new double[30]{4.01, 5.55, 3.52, 1.28, 2.5, 3.57, 4.1, 6.04, 3.69, 5.63, 8.45, 6.68, 2.61, 4.16, 3.94, 3.13, 6.38, 8.37, 5.77, 5.16, 4.44, 2.25, 5.86, 8.86, 8.83, 1.88, 1.12, 5.17, 3.22, 9.92});

    ASSERT_FALSE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck17) {
    
    // Создаем две матрицы с одинаковыми значениями
    S21Matrix matrix1(4, 6);
    matrix1.FillByMass(new double[24]{6.93, 8.89, 8.2, 1.51, 6.98, 5.5, 9.13, 3.26, 7.79, 8.79, 2.18, 2.8, 6.75, 8.08, 2.72, 2.36, 4.58, 6.0, 2.32, 8.8, 8.85, 9.52, 7.25, 7.78});

    S21Matrix matrix2(4, 6);
    matrix2.FillByMass(new double[24]{6.93, 8.89, 8.2, 1.51, 6.98, 5.5, 9.13, 3.26, 7.79, 8.79, 2.18, 2.8, 6.75, 8.08, 2.72, 2.36, 4.58, 6.0, 2.32, 8.8, 8.85, 9.52, 7.25, 7.78});

    ASSERT_TRUE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck18) {
    
    S21Matrix matrix1(4, 6);
    matrix1.FillByMass(new double[24]{8.38, 3.34, 1.78, 4.62, 8.08, 8.8, 2.31, 8.55, 4.81, 3.34, 1.25, 2.64, 5.49, 5.42, 4.27, 3.59, 1.45, 6.84, 3.09, 7.66, 8.1, 7.42, 7.28, 9.99});

    S21Matrix matrix2(4, 6);
    matrix2.FillByMass(new double[24]{9.24, 6.3, 9.77, 9.56, 3.94, 9.51, 7.61, 7.68, 8.41, 4.5, 1.04, 5.08, 9.39, 4.81, 8.45, 7.35, 3.3, 3.5, 6.59, 4.28, 8.43, 4.16, 1.76, 2.51});

    ASSERT_FALSE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck19) {
    
    // Создаем две матрицы с одинаковыми значениями
    S21Matrix matrix1(6, 6);
    matrix1.FillByMass(new double[36]{2.54, 2.8, 4.76, 1.12, 4.83, 3.68, 7.36, 8.54, 6.33, 5.78, 7.45, 6.07, 1.96, 6.13, 8.67, 1.95, 5.88, 6.26, 7.13, 9.4, 8.43, 8.82, 4.39, 5.45, 3.67, 2.68, 9.02, 9.15, 4.14, 6.15, 5.05, 7.62, 8.92, 8.61, 7.48, 3.23});

    S21Matrix matrix2(6, 6);
    matrix2.FillByMass(new double[36]{2.54, 2.8, 4.76, 1.12, 4.83, 3.68, 7.36, 8.54, 6.33, 5.78, 7.45, 6.07, 1.96, 6.13, 8.67, 1.95, 5.88, 6.26, 7.13, 9.4, 8.43, 8.82, 4.39, 5.45, 3.67, 2.68, 9.02, 9.15, 4.14, 6.15, 5.05, 7.62, 8.92, 8.61, 7.48, 3.23});

    ASSERT_TRUE(matrix1 == matrix2);

}

TEST(MatrixEqualityTest, EqualityCheck20) {
    
    S21Matrix matrix1(2, 6);
    matrix1.FillByMass(new double[12]{6.82, 1.76, 2.98, 9.46, 4.75, 7.81, 7.04, 2.77, 9.79, 4.33, 5.7, 9.5});

    S21Matrix matrix2(3, 7);
    matrix2.FillByMass(new double[14]{2.95, 2.69, 8.13, 1.76, 9.72, 1.42, 5.1, 4.8, 1.37, 3.76, 6.5, 1.92, 5.15, 8.27});

    ASSERT_FALSE(matrix1 == matrix2);

}
