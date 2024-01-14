#include "s21_matrix_oop.h"

S21Matrix::S21Matrix() : rows_(0), cols_(0), matrix_(nullptr) {}

S21Matrix::S21Matrix(int rows, int cols) : rows_(rows), cols_(cols), matrix_(nullptr) {
    allocateMatrix();
}

S21Matrix::S21Matrix(const S21Matrix& other) : rows_(other.rows_), cols_(other.cols_), matrix_(nullptr) {
    allocateMatrix();
    copyMatrix(other.matrix_);
}

S21Matrix::S21Matrix(S21Matrix&& other) : rows_(other.rows_), cols_(other.cols_), matrix_(other.matrix_) {
    other.rows_ = 0;
    other.cols_ = 0;
    other.matrix_ = nullptr;
}

S21Matrix::~S21Matrix() {
    deallocateMatrix();
}

int S21Matrix::getRows() const {
    return rows_;
}

void S21Matrix::setRows(int newRows) {
    if (newRows >= 0) {
        if (newRows > rows_) {
            for (int i = rows_; i < newRows; i++) {
                matrix_[i] = new double[cols_]{};
            }
        }
        else if (newRows < rows_) {
            for (int i = newRows; i < rows_; i++) {
                delete[] matrix_[i];
            }
        }
        rows_ = newRows;
    } else {
        std::cerr << "Ошибка: Количество строк не может быть отрицательным." << std::endl;
    }
}

// Accessor для cols_
int S21Matrix::getCols() const {
    return cols_;
}

// Mutator для cols_
void S21Matrix::setCols(int newCols) {
    if (newCols >= 0) {
        int min_val = 0;
        if(cols_>newCols) 
            min_val = newCols;
        else
            min_val = cols_;

        for(int i = 0; i < rows_; i++) {
            double* newArray = new double[newCols]{};

            for( int j = 0; j < min_val; j++) 
                newArray[i] = matrix_[i][j];
            
            delete[] matrix_[i];
            matrix_[i] = newArray;
        }
        cols_ = newCols;
    } else {
        std::cerr << "Ошибка: Количество столбцов не может быть отрицательным." << std::endl;
    }
}

void S21Matrix::allocateMatrix() {
    matrix_ = new double*[rows_];
    for (int i = 0; i < rows_; ++i) {
        matrix_[i] = new double[cols_]{};
    }
}

void S21Matrix::deallocateMatrix() {
    if (matrix_ != nullptr) {
        for (int i = 0; i < rows_; ++i) {
            delete[] matrix_[i];
        }
        delete[] matrix_;
        matrix_ = nullptr;
    }
}

void S21Matrix::copyMatrix(const double** source) {
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            matrix_[i][j] = source[i][j];
        }
    }
}


bool S21Matrix::EqMatrix(const S21Matrix& other) const {
    bool res = true;
    if (rows_ != other.rows_ || cols_ != other.cols_) {
        res = false;
    }

    if(res !=false)
        for (int i = 0; i < rows_; ++i) {
            for (int j = 0; j < cols_; ++j) {
                if (std::fabs(matrix_[i][j] - other.matrix_[i][j]) > EPS) {
                    res = false;
                    break;
                }
            }
            if(res == false) break;
        }

    return true;
}

void S21Matrix::SumMatrix(const S21Matrix& other){

    if (this->rows_ != other.rows_ || this->cols_ != other.cols_) {
        throw std::invalid_argument("Matrices have different dimensions for the operation");
    }

    for (int i = 0; i < this->rows_; i++) 
      for (int j = 0; j < this->cols_; j++) 
        this->matrix_[i][j] = this->matrix_[i][j] + other.matrix_[i][j];
      
}

void S21Matrix::SubMatrix(const S21Matrix& other){

    if (this->rows_ != other.rows_ || this->cols_ != other.cols_) {
        throw std::invalid_argument("Matrices have different dimensions for the operation");
    }

    for (int i = 0; i < this->rows_; i++) 
      for (int j = 0; j < this->cols_; j++) 
        this->matrix_[i][j] = this->matrix_[i][j] - other.matrix_[i][j];
      
}

void S21Matrix::MulNumber(const double num) {
    for (int i = 0; i < this->rows_; i++) 
      for (int j = 0; j < this->cols_; j++) 
        this->matrix_[i][j] = this->matrix_[i][j]*num;
}

void S21Matrix::MulMatrix(const S21Matrix& other) {
    if (this->cols_ != other.rows_) {
        throw std::invalid_argument("Incompatible dimensions for matrix multiplication");
    }
    
    for (int i = 0; i < this->rows_; i++) {
      for (int j = 0; j < other.cols_; j++) {
        double sum = 0.0;
        for (int k = 0; k < this->cols_; k++) {
          sum += this->matrix_[i][k] * other.matrix_[k][j];
        }
        this->matrix_[i][j] = sum;
      }
    }
}

S21Matrix S21Matrix::Transpose() {

    S21Matrix transposed_matrix(cols_, rows_);

    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            transposed_matrix.matrix_[j][i] = matrix_[i][j];
        }
    }
    return transposed_matrix;
}


S21Matrix S21Matrix::RemoveRowAndColumn(int row, int col) const {
    S21Matrix minor(rows_ - 1, cols_ - 1);

    int newRow = 0, newCol;
    for (int i = 0; i < rows_; ++i) {
        if (i == row) {
            continue;  // Пропускаем удаляемую строку
        }

        newCol = 0;
        for (int j = 0; j < cols_; ++j) {
            if (j == col) {
                continue;  // Пропускаем удаляемый столбец
            }

            minor.matrix_[newRow][newCol] = matrix_[i][j];
            newCol++;
        }

        newRow++;
    }

    return minor;
}

S21Matrix S21Matrix::CalcComplements() {

    if (this->cols_ != this->rows_) {
        throw std::invalid_argument("Matrix has no square dimensions");
    }

    S21Matrix calc_complements_matrix(rows_, cols_);

    if (this->rows_ == 1 && this->cols_ == 1) {
        calc_complements_matrix.matrix_[0][0] = this->matrix_[0][0];
    } else {
      for (int i = 0; i < this->rows_; i++) {
        for (int j = 0; j < this->cols_; j++) {
            S21Matrix minor = this->RemoveRowAndColumn(i, j);
            double determinant = minor.Determinant();
            double complement = determinant * pow(-1, i + j);
            calc_complements_matrix.matrix_[i][j] = complement;
        }
      }
    }
    return calc_complements_matrix;
}

double S21Matrix::Determinant() const {
        if (rows_ != cols_) {
            throw std::invalid_argument("Matrix is not square");
        }

        S21Matrix copy(*this);
        double det = 1.0;

        if (EliminateZeros(copy, det)) {
            return 0.0;
        }

        for (int i = 0; i < rows_; ++i) {
            det *= copy.matrix_[i][i];
        }

        return det;
    }

    S21Matrix S21Matrix::InverseMatrix() const {
        if (rows_ != cols_) {
            throw std::invalid_argument("Matrix is not square");
        }

        double determinant = 1.0;
        int flag = 0;

        // Создаем матрицу для результата
        S21Matrix result(rows_, cols_);

        // Создаем единичную матрицу
        S21Matrix eye(rows_, cols_);
        eye.ResetEye();

        // Проверяем возможность выделения памяти
        if (result.matrix_ == nullptr || eye.matrix_ == nullptr) {
            throw std::bad_alloc();
        }

        // Диагонализация и устранение нулей
        if (EliminateZeros(result, eye, determinant)) {
            throw std::invalid_argument("Diagonalization failed, inverse does not exist");
        }

        // Проверка близости детерминанта к нулю
        if (std::fabs(determinant) <= 0.0000004) {
            throw std::invalid_argument("Determinant is close to zero, inverse does not exist");
        }

        // Инвертирование диагонали и обратное инвертирование
        DoDiagonalInvert(result, eye);
        InvertInvert(result, eye);

        return result;
    }


    bool S21Matrix::EliminateZeros(S21Matrix& result, S21Matrix& eye, double& det) const {
        for (int i = 0; i < rows_ - 1; ++i) {
            int rowToSwap = i;
            while (rowToSwap < rows_ - 1 && result.matrix_[rowToSwap][i] == 0) {
                rowToSwap++;
            }

            if (i != rows_ - 1 && result.matrix_[rowToSwap][i] != 0 && result.matrix_[i][i] == 0) {
                SwapRowsInvert(result, eye, i, rowToSwap);
                det *= (-1);
            }

            if (rowToSwap == rows_ - 1) {
                return true;  // Все нули в столбце, определитель будет 0
            }

            for (int j = i + 1; j < rows_; ++j) {
                DoZeroInvert(result, eye, i, j);
            }
        }

        return false;
    }

    int S21Matrix::CheckForZeroInvert(S21Matrix& matrix, S21Matrix& eye, int k, double& det) const {
        int rows = k, cols = k;
        while (matrix.matrix_[rows][cols] == 0 && rows < matrix.rows_) {
            rows++;
        }

        if (k != matrix.rows_ - 1 && matrix.matrix_[rows][cols] != 0 && matrix.matrix_[k][k] == 0) {
            SwapRowsInvert(matrix, eye, k, rows);
            det *= (-1);
        }

        if (rows == matrix.rows_ - 1) {
            return 1;
        } else {
            return 0;
        }
    }

    void S21Matrix::DoZeroInvert(S21Matrix& result, S21Matrix& eye, int i, int j) const {
        if (result.matrix_[j][i] != 0) {
            double mass[cols_], mass_eye[cols_], temp1, temp2;
            temp1 = result.matrix_[i][i];
            temp2 = result.matrix_[j][i];
            for (int k = 0; k < cols_; ++k) {
                mass[k] = result.matrix_[i][k] / temp1 * temp2;
                mass_eye[k] = eye.matrix_[i][k] / temp1 * temp2;
            }
            for (int k = 0; k < cols_; ++k) {
                result.matrix_[j][k] -= mass[k];
                eye.matrix_[j][k] -= mass_eye[k];
            }
        }
    }
    void S21Matrix::DoZeroFullInvert(S21Matrix& result, S21Matrix& eye, int i, int j) const {
        if (result.matrix_[j][i] != 0) {
            double mass[cols_], mass_eye[cols_], temp1, temp2;
            temp1 = result.matrix_[i][i];
            temp2 = result.matrix_[j][i];
            for (int k = cols_ - 1; k >= 0; --k) {
                mass[k] = result.matrix_[i][k] / temp1 * temp2;
                mass_eye[k] = eye.matrix_[i][k] / temp1 * temp2;
            }
            for (int k = cols_ - 1; k >= 0; --k) {
                result.matrix_[j][k] -= mass[k];
                eye.matrix_[j][k] -= mass_eye[k];
            }
        }
    }

    void S21Matrix::SwapRowsInvert(S21Matrix& result, S21Matrix& eye, int i, int j) const {
        for (int k = 0; k < cols_; ++k) {
            std::swap(result.matrix_[i][k], result.matrix_[j][k]);
            std::swap(eye.matrix_[i][k], eye.matrix_[j][k]);
        }
    }

    void S21Matrix::DoDiagonalInvert(S21Matrix& result, S21Matrix& eye) const {
        for (int i = rows_ - 1; i >= 0; --i) {
            for (int j = i - 1; j >= 0; --j) {
                DoZeroFullInvert(result, eye, i, j);
            }
        }
    }

    // Установка диагонали единичной матрицы
    void S21Matrix::ResetEye() {
        for (int i = 0; i < rows_; ++i) {
            for (int j = 0; j < cols_; ++j) {
                if (i != j) {
                    matrix_[i][j] = 0;
                } else {
                    matrix_[i][j] = 1;
                }
            }
        }
    }

    // Инвертирование диагонали
    void S21Matrix::InvertInvert(S21Matrix& result, S21Matrix& eye) const {
        for (int i = 0; i < rows_; ++i) {
            for (int j = 0; j < cols_; ++j) {
                eye.matrix_[i][j] /= result.matrix_[i][i];
            }
        }
    }



 void S21Matrix::DoZero(S21Matrix& matrix, int i, int j) const {
        double mass[cols_], temp1, temp2;
        if (matrix.matrix_[j][i] != 0) {
            temp1 = matrix.matrix_[i][i];
            temp2 = matrix.matrix_[j][i];
            for (int k = 0; k < cols_; ++k) {
                mass[k] = matrix.matrix_[i][k] / temp1 * temp2;
            }
            for (int k = 0; k < cols_; ++k) {
                matrix.matrix_[j][k] -= mass[k];
            }
        }
    }

    void S21Matrix::SwapRows(S21Matrix& matrix, int i, int j) const {
        for (int k = 0; k < cols_; ++k) {
            std::swap(matrix.matrix_[i][k], matrix.matrix_[j][k]);
        }
    }

    int S21Matrix::CheckForZero(S21Matrix& matrix, int k, double& det) const {
        int rows = k, cols = k;
        while (rows < rows_ - 1 && matrix.matrix_[rows][cols] == 0) {
            rows++;
        }

        if (k != rows_ - 1 && matrix.matrix_[rows][cols] != 0 && matrix.matrix_[k][k] == 0) {
            SwapRows(matrix, k, rows);
            det *= (-1);
        }

        if (rows == rows_ - 1) {
            return 1;
        } else {
            return 0;
        }
    }

    bool S21Matrix::EliminateZeros(S21Matrix& copy, double& det) const {
        for (int i = 0; i < rows_ - 1; ++i) {
            int rowToSwap = i;
            while (rowToSwap < rows_ - 1 && copy.matrix_[rowToSwap][i] == 0) {
                rowToSwap++;
            }

            if (i != rows_ - 1 && copy.matrix_[rowToSwap][i] != 0 && copy.matrix_[i][i] == 0) {
                SwapRows(copy, i, rowToSwap);
                det *= (-1);
            }

            if (rowToSwap == rows_ - 1) {
                return true;  // Все нули в столбце, определитель будет 0
            }

            for (int j = i + 1; j < rows_; ++j) {
                DoZero(copy, i, j);
            }
        }

        return false;
    }