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
    S21Matrix CalcComplements() const;
    double Determinant() const;
    S21Matrix InverseMatrix() const ;

    void SetDiagonal(double *diag_mass, int n);
    void PrintMatrix() const;
    void PrintMatrix();
    void FillByMass(double *mass);


    S21Matrix operator+(const S21Matrix& other) const;
    S21Matrix operator-(const S21Matrix& other) const;
    S21Matrix operator*(const double num) const;
    S21Matrix operator*(const S21Matrix& other) const;
    bool operator==(const S21Matrix& other) const;
    S21Matrix& operator=(const S21Matrix& other);
    S21Matrix& operator+=(const S21Matrix& other);
    S21Matrix& operator-=(const S21Matrix& other);
    S21Matrix& operator*=(const double num);
    S21Matrix& operator*=(const S21Matrix& other);
    double& operator()(int i, int j);
    const double& operator()(int i, int j) const;


private:
    void allocateMatrix();
    void deallocateMatrix();
    void copyMatrix(const double* const* source);
    S21Matrix RemoveRowAndColumn(int row, int col) const;
    void DoZero(S21Matrix& matrix, int i, int j) const;
    int CheckForZero(S21Matrix& matrix, int k, double& det) const;
    bool EliminateZeros(S21Matrix& copy, double& det) const;
    void SwapRows(S21Matrix& matrix, int i, int j) const;
    void ResetEye();
};
