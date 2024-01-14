#include <iostream>
#include <cmath>
#define EPS 0.00001

class S21Matrix {
private:
    int rows_, cols_;
    double** matrix_;

public:
    S21Matrix();
    S21Matrix(int rows, int cols);
    S21Matrix(const S21Matrix& other);
    S21Matrix(S21Matrix&& other);
    ~S21Matrix();

    int getRows() const;
    int getCols() const;
    void setRows(int newRows);
    void setCols(int newCols);
    bool EqMatrix(const S21Matrix& other) const;
    void SumMatrix(const S21Matrix& other);
    void SubMatrix(const S21Matrix& other);
    void MulNumber(const double num);
    void MulMatrix(const S21Matrix& other);
    S21Matrix Transpose();
    S21Matrix CalcComplements();
    double Determinant() const;

private:
    void allocateMatrix();
    void deallocateMatrix();
    void copyMatrix(const double** source);
    S21Matrix RemoveRowAndColumn(int row, int col) const;
    void DoZero(S21Matrix& matrix, int i, int j) const;
    void S21Matrix::SwapRows(S21Matrix& matrix, int i, int j) const;
    int CheckForZero(S21Matrix& matrix, int k, double& det) const;
    bool EliminateZeros(S21Matrix& copy, double& det) const;
    S21Matrix InverseMatrix() const ;
    bool EliminateZeros(S21Matrix& result, S21Matrix& eye, double& det) const;
    void SwapRowsInvert(S21Matrix& result, S21Matrix& eye, int i, int j) const ;
    int CheckForZeroInvert(S21Matrix& matrix, S21Matrix& eye, int k, double& det) const;
    void DoZeroInvert(S21Matrix& result, S21Matrix& eye, int i, int j) const ;
    void DoZeroFullInvert(S21Matrix& result, S21Matrix& eye, int i, int j) const;
    void DoDiagonalInvert(S21Matrix& result, S21Matrix& eye) const;
    void ResetEye();
    void InvertInvert(S21Matrix& result, S21Matrix& eye) const ;

};
