#include "s21_test.h"


TEST(MatrixSetterConstructorTest, SetterConstructor1) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(6, 5);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 6);
    
    matrix.setRows(5);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 5);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 5);
    
    matrix.setCols(4);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 4);


}

TEST(MatrixSetterConstructorTest, SetterConstructor2) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(3, 2);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 3);
    
    matrix.setRows(1);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 1);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 2);
    
    matrix.setCols(0);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 0);


}

TEST(MatrixSetterConstructorTest, SetterConstructor3) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(4, 5);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 4);
    
    matrix.setRows(6);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 6);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 5);
    
    matrix.setCols(7);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 7);


}

TEST(MatrixSetterConstructorTest, SetterConstructor4) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(2, 2);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 2);
    
    matrix.setRows(0);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 0);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 2);
    
    matrix.setCols(0);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 0);


}

TEST(MatrixSetterConstructorTest, SetterConstructor5) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(2, 2);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 2);
    
    matrix.setRows(1);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 1);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 2);
    
    matrix.setCols(1);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 1);


}

TEST(MatrixSetterConstructorTest, SetterConstructor6) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(5, 5);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 5);
    
    matrix.setRows(5);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 5);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 5);
    
    matrix.setCols(5);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 5);


}

TEST(MatrixSetterConstructorTest, SetterConstructor7) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(6, 5);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 6);
    
    matrix.setRows(4);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 4);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 5);
    
    matrix.setCols(3);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 3);


}

TEST(MatrixSetterConstructorTest, SetterConstructor8) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(5, 3);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 5);
    
    matrix.setRows(4);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 4);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 3);
    
    matrix.setCols(2);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 2);


}

TEST(MatrixSetterConstructorTest, SetterConstructor9) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(3, 5);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 3);
    
    matrix.setRows(4);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 4);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 5);
    
    matrix.setCols(6);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 6);


}

TEST(MatrixSetterConstructorTest, SetterConstructor10) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(5, 4);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 5);
    
    matrix.setRows(3);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 3);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 4);
    
    matrix.setCols(2);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 2);


}

TEST(MatrixSetterConstructorTest, SetterConstructor11) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(6, 2);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 6);
    
    matrix.setRows(7);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 7);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 2);
    
    matrix.setCols(3);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 3);


}

TEST(MatrixSetterConstructorTest, SetterConstructor12) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(3, 4);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 3);
    
    matrix.setRows(3);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 3);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 4);
    
    matrix.setCols(4);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 4);


}

TEST(MatrixSetterConstructorTest, SetterConstructor13) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(6, 5);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 6);
    
    matrix.setRows(4);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 4);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 5);
    
    matrix.setCols(3);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 3);


}

TEST(MatrixSetterConstructorTest, SetterConstructor14) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(3, 3);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 3);
    
    matrix.setRows(1);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 1);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 3);
    
    matrix.setCols(1);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 1);


}

TEST(MatrixSetterConstructorTest, SetterConstructor15) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(2, 2);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 2);
    
    matrix.setRows(3);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 3);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 2);
    
    matrix.setCols(3);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 3);


}

TEST(MatrixSetterConstructorTest, SetterConstructor16) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(2, 4);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 2);
    
    matrix.setRows(1);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 1);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 4);
    
    matrix.setCols(3);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 3);


}

TEST(MatrixSetterConstructorTest, SetterConstructor17) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(4, 2);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 4);
    
    matrix.setRows(3);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 3);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 2);
    
    matrix.setCols(1);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 1);


}

TEST(MatrixSetterConstructorTest, SetterConstructor18) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(6, 5);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 6);
    
    matrix.setRows(6);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 6);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 5);
    
    matrix.setCols(5);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 5);


}

TEST(MatrixSetterConstructorTest, SetterConstructor19) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(3, 3);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 3);
    
    matrix.setRows(1);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 1);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 3);
    
    matrix.setCols(1);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 1);


}

TEST(MatrixSetterConstructorTest, SetterConstructor20) {
    
    // Создаем матрицу-источник
    S21Matrix matrix(4, 5);    

    int old_rows = matrix.getRows();
    ASSERT_TRUE(old_rows == 4);
    
    matrix.setRows(2);
    
    int new_rows = matrix.getRows();
    ASSERT_TRUE(new_rows == 2);

    int old_cols = matrix.getCols();
    ASSERT_TRUE(old_cols == 5);
    
    matrix.setCols(3);
    
    int new_cols = matrix.getCols();
    ASSERT_TRUE(new_cols == 3);


}
