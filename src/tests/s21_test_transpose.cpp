#include "s21_test.h"


TEST(MatrixTransposeTest, Transpose1) {
    
    S21Matrix matrix(4, 6);
    matrix.FillByMass(new double[24]{4.21, 9.39, 4.05, 2.18, 2.37, 2.17, 3.18, 6.16, 3.93, 3.34, 1.92, 9.91, 8.68, 1.83, 7.5, 7.17, 6.86, 4.99, 7.82, 7.19, 7.39, 1.65, 7.54, 4.47});

    S21Matrix expectedTranspose(6, 4);
    expectedTranspose.FillByMass(new double[24]{0});
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose2) {
    
    S21Matrix matrix(3, 2);
    matrix.FillByMass(new double[6]{7.53, 9.18, 7.94, 7.22, 2.71, 2.52});

    S21Matrix expectedTranspose(2, 3);
    expectedTranspose.FillByMass(new double[6]{0});
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose3) {
    
    S21Matrix matrix(6, 6);
    matrix.FillByMass(new double[36]{3.02, 9.97, 8.62, 8.06, 3.03, 9.27, 5.92, 3.99, 6.82, 1.81, 3.33, 9.61, 1.15, 1.43, 3.01, 7.8, 3.19, 3.15, 8.67, 1.43, 1.5, 1.91, 7.07, 2.44, 8.19, 2.32, 7.03, 2.54, 2.55, 1.66, 5.21, 8.58, 7.79, 5.45, 5.4, 3.46});

    S21Matrix expectedTranspose(6, 6);
    expectedTranspose.FillByMass(new double[36]{0});
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose4) {
    
    S21Matrix matrix(4, 5);
    matrix.FillByMass(new double[20]{5.53, 6.74, 5.84, 6.82, 5.89, 2.25, 3.75, 2.71, 3.94, 7.74, 6.34, 7.13, 1.33, 3.25, 1.26, 2.33, 8.31, 9.89, 1.85, 5.99});

    S21Matrix expectedTranspose(5, 4);
    expectedTranspose.FillByMass(new double[20]{0});
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose5) {
    
    S21Matrix matrix(6, 3);
    matrix.FillByMass(new double[18]{5.52, 7.73, 5.75, 4.66, 4.61, 8.06, 1.42, 6.43, 2.92, 2.33, 8.43, 2.7, 4.65, 9.9, 3.87, 2.79, 5.49, 9.63});

    S21Matrix expectedTranspose(3, 6);
    expectedTranspose.FillByMass(new double[18]{0});
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose6) {
    
    S21Matrix matrix(3, 3);
    matrix.FillByMass(new double[9]{9.85, 2.12, 6.1, 6.59, 1.57, 6.97, 9.55, 7.43, 1.71});

    S21Matrix expectedTranspose(3, 3);
    expectedTranspose.FillByMass(new double[9]{0});
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose7) {
    
    S21Matrix matrix(6, 6);
    matrix.FillByMass(new double[36]{8.27, 3.62, 7.8, 1.74, 7.92, 2.63, 1.23, 6.66, 3.13, 2.19, 2.78, 1.07, 9.69, 9.23, 5.59, 5.29, 5.08, 6.72, 7.11, 1.69, 8.43, 2.34, 8.27, 3.81, 9.32, 6.99, 1.34, 6.47, 6.74, 2.89, 5.25, 5.42, 6.82, 3.33, 6.64, 4.08});

    S21Matrix expectedTranspose(6, 6);
    expectedTranspose.FillByMass(new double[36]{0});
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose8) {
    
    S21Matrix matrix(2, 5);
    matrix.FillByMass(new double[10]{4.89, 7.45, 8.96, 7.1, 5.45, 3.64, 9.76, 9.63, 1.07, 7.95});

    S21Matrix expectedTranspose(5, 2);
    expectedTranspose.FillByMass(new double[10]{0});
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose9) {
    
    S21Matrix matrix(5, 3);
    matrix.FillByMass(new double[15]{2.85, 7.46, 7.22, 2.9, 6.19, 5.52, 1.34, 7.09, 9.75, 3.19, 5.45, 9.92, 9.19, 1.87, 3.44});

    S21Matrix expectedTranspose(3, 5);
    expectedTranspose.FillByMass(new double[15]{0});
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose10) {
    
    S21Matrix matrix(3, 4);
    matrix.FillByMass(new double[12]{1.32, 1.3, 5.96, 7.27, 2.27, 4.34, 5.68, 1.55, 6.99, 2.47, 6.81, 3.69});

    S21Matrix expectedTranspose(4, 3);
    expectedTranspose.FillByMass(new double[12]{0});
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose11) {
    
    S21Matrix matrix(4, 3);
    matrix.FillByMass(new double[12]{5.93, 8.06, 1.28, 8.91, 6.9, 7.93, 9.46, 4.31, 5.53, 3.56, 2.9, 3.05});

    S21Matrix expectedTranspose(3, 4);
    expectedTranspose.FillByMass(new double[12]{0});
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose12) {
    
    S21Matrix matrix(5, 2);
    matrix.FillByMass(new double[10]{4.93, 2.79, 3.44, 8.81, 3.62, 8.8, 5.05, 9.01, 3.9, 9.83});

    S21Matrix expectedTranspose(2, 5);
    expectedTranspose.FillByMass(new double[10]{0});
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose13) {
    
    S21Matrix matrix(5, 4);
    matrix.FillByMass(new double[20]{4.27, 9.42, 7.26, 4.82, 9.19, 7.39, 9.68, 2.68, 3.41, 5.79, 6.66, 9.12, 6.45, 5.68, 3.66, 6.38, 8.65, 7.97, 9.2, 3.26});

    S21Matrix expectedTranspose(4, 5);
    expectedTranspose.FillByMass(new double[20]{0});
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose14) {
    
    S21Matrix matrix(2, 2);
    matrix.FillByMass(new double[4]{7.05, 8.55, 6.37, 5.14});

    S21Matrix expectedTranspose(2, 2);
    expectedTranspose.FillByMass(new double[4]{0});
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose15) {
    
    S21Matrix matrix(5, 3);
    matrix.FillByMass(new double[15]{7.08, 3.06, 2.84, 6.45, 6.58, 5.48, 8.78, 6.17, 3.44, 6.98, 8.88, 9.41, 8.8, 5.74, 3.37});

    S21Matrix expectedTranspose(3, 5);
    expectedTranspose.FillByMass(new double[15]{0});
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose16) {
    
    S21Matrix matrix(5, 5);
    matrix.FillByMass(new double[25]{3.33, 6.08, 4.96, 7.73, 8.36, 3.93, 7.19, 4.72, 4.22, 6.04, 7.85, 9.15, 3.86, 8.67, 5.43, 7.17, 6.29, 1.0, 1.32, 2.28, 3.43, 2.45, 1.42, 6.23, 4.4});

    S21Matrix expectedTranspose(5, 5);
    expectedTranspose.FillByMass(new double[25]{0});
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose17) {
    
    S21Matrix matrix(4, 6);
    matrix.FillByMass(new double[24]{1.79, 9.55, 7.65, 3.38, 7.01, 5.95, 8.67, 3.43, 1.25, 3.98, 6.6, 2.7, 5.72, 7.42, 4.36, 7.59, 9.78, 2.7, 7.67, 6.01, 5.36, 3.4, 5.9, 4.16});

    S21Matrix expectedTranspose(6, 4);
    expectedTranspose.FillByMass(new double[24]{0});
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose18) {
    
    S21Matrix matrix(4, 6);
    matrix.FillByMass(new double[24]{7.92, 6.55, 4.92, 4.07, 5.48, 5.91, 4.23, 9.33, 4.04, 3.78, 9.79, 3.95, 1.21, 2.86, 4.54, 1.46, 8.74, 3.29, 2.03, 1.26, 3.83, 4.39, 3.98, 1.24});

    S21Matrix expectedTranspose(6, 4);
    expectedTranspose.FillByMass(new double[24]{0});
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose19) {
    
    S21Matrix matrix(4, 4);
    matrix.FillByMass(new double[16]{7.24, 2.95, 7.12, 8.27, 3.22, 4.12, 6.32, 6.68, 8.47, 5.28, 1.41, 3.07, 8.08, 3.06, 3.83, 2.9});

    S21Matrix expectedTranspose(4, 4);
    expectedTranspose.FillByMass(new double[16]{0});
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}

TEST(MatrixTransposeTest, Transpose20) {
    
    S21Matrix matrix(4, 6);
    matrix.FillByMass(new double[24]{2.0, 8.18, 2.62, 6.94, 5.26, 2.72, 6.19, 3.5, 4.79, 1.21, 2.79, 8.67, 8.05, 5.8, 4.34, 7.49, 8.39, 5.95, 7.46, 8.06, 8.25, 1.22, 3.81, 6.63});

    S21Matrix expectedTranspose(6, 4);
    expectedTranspose.FillByMass(new double[24]{0});
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            expectedTranspose(j, i) = matrix(i, j);
        }
    }

    S21Matrix result = matrix.Transpose();
    
    ASSERT_TRUE(result == expectedTranspose);
}
