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
            // Увеличиваем количество строк
            double** newMatrix = new double*[newRows];
            for (int i = 0; i < rows_; i++) {
                newMatrix[i] = matrix_[i];
            }
            for (int i = rows_; i < newRows; i++) {
                newMatrix[i] = new double[cols_]{};
            }

            // Освобождаем старую память
            delete[] matrix_;

            // Обновляем указатель на новую матрицу
            matrix_ = newMatrix;
        }
        else if (newRows < rows_) {
            // Уменьшаем количество строк
            for (int i = newRows; i < rows_; i++) {
                delete[] matrix_[i];
            }
        }
        rows_ = newRows;
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
            // Создаем новую матрицу-копию
            double** newMatrix = new double*[rows_];
            for (int i = 0; i < rows_; i++) {
                newMatrix[i] = new double[newCols]{};
                for (int j = 0; j < min_val; j++) {
                    newMatrix[i][j] = matrix_[i][j];
                }
                delete[] matrix_[i];
            }
            delete[] matrix_;

            // Безопасно ресайзим матрицу
            matrix_ = newMatrix;

            // Переносим обратно элементы из копии
            for (int i = 0; i < rows_; i++) {
                for (int j = cols_; j < newCols; j++) {
                    matrix_[i][j] = 0.0; // Инициализируем новые элементы нулями
                }
            }
            cols_ = newCols;

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

void S21Matrix::copyMatrix(const double* const* source){
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

return res;
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

    S21Matrix temp(this->rows_, other.cols_);  

    for (int i = 0; i < this->rows_; i++) {
        for (int j = 0; j < other.cols_; j++) {
            double sum = 0.0;
            for (int k = 0; k < this->cols_; k++) {
                sum += this->matrix_[i][k] * other.matrix_[k][j];
            }
            temp.matrix_[i][j] = sum; 
        }
    }

    if(this->cols_ != other.cols_) 
        this->setCols(other.cols_);

    for (int i = 0; i < this->rows_; i++) {
        for (int j = 0; j < other.cols_; j++) {
            this->matrix_[i][j] = temp.matrix_[i][j];
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

S21Matrix S21Matrix::CalcComplements() const{
if (rows_ != cols_) {
    throw std::invalid_argument("Matrix is not square");
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

S21Matrix S21Matrix::InverseMatrix() const {

    double det = this->Determinant();

    if (abs(det) < EPS) {
        throw std::invalid_argument("Determinant is equal to zero");
    }

    S21Matrix calc_complements = this->CalcComplements();

    S21Matrix calc_complements_T = calc_complements.Transpose();

    calc_complements_T.MulNumber(1.0/det);

    return calc_complements_T;
}


S21Matrix S21Matrix::operator+(const S21Matrix& other) const {
    S21Matrix result = *this;
    result.SumMatrix(other);
    return result;
}

S21Matrix S21Matrix::operator-(const S21Matrix& other) const {
    S21Matrix result = *this;
    result.SubMatrix(other);
    return result;
}

S21Matrix S21Matrix::operator*(const double num) const {
    S21Matrix result = *this;
    result.MulNumber(num);
    return result;
}

S21Matrix S21Matrix::operator*(const S21Matrix& other) const {
    S21Matrix result;
    result = *this;
    result.MulMatrix(other);
    return result;
}

bool S21Matrix::operator==(const S21Matrix& other) const {
return this->EqMatrix(other);
}

S21Matrix& S21Matrix::operator=(const S21Matrix& other) {
    if (this != &other) {
        deallocateMatrix();
        rows_ = other.rows_;
        cols_ = other.cols_;
        allocateMatrix();
        copyMatrix(other.matrix_);
    }
    return *this;
}

S21Matrix& S21Matrix::operator+=(const S21Matrix& other) {
    SumMatrix(other);
    return *this;
}

S21Matrix& S21Matrix::operator-=(const S21Matrix& other) {
    SubMatrix(other);
    return *this;
}

S21Matrix& S21Matrix::operator*=(const double num) {
    MulNumber(num);
    return *this;
}

S21Matrix& S21Matrix::operator*=(const S21Matrix& other) {
    MulMatrix(other);
    return *this;
}

double& S21Matrix::operator()(int i, int j) {
    if (i < 0 || i >= rows_ || j < 0 || j >= cols_) {
        throw std::out_of_range("Index out of bounds");
    }

    return matrix_[i][j];
}

const double& S21Matrix::operator()(int i, int j) const {
    if (i < 0 || i >= rows_ || j < 0 || j >= cols_) {
        throw std::out_of_range("Index out of bounds");
    }

    return matrix_[i][j];
}


// void S21Matrix::SetDiagonal(double *diag_mass, int n){
//     for (int i = 0; i < n; ++i){
//         this->matrix_[i][i]=diag_mass[i];
//     }
// }

// void S21Matrix::PrintMatrix(){
//     for (int i = 0; i < this->rows_; ++i){
//         for(int j = 0; j< this->cols_; j++){
//             printf("%f ", this->matrix_[i][j]);
//         }
//         printf("\n");
        
//     }
// }

// void S21Matrix::PrintMatrix() const{
//     for (int i = 0; i < this->rows_; ++i){
//         for(int j = 0; j< this->cols_; j++){
//             printf("%f ", this->matrix_[i][j]);
//         }
//         printf("\n");
        
//     }
// }

void S21Matrix::FillByMass(double *mass) {
    int n = 0;
    for (int i = 0; i < this->rows_; i++){
        for(int j = 0; j< this->cols_; j++){
            this->matrix_[i][j] = mass[n];
            n++;
        }
    }
}

// int main(){
// S21Matrix matrix(2, 2);
//     matrix.FillByMass(new double[4]{-3.718494744894476, -2.9217282325140004, -2.692199634988964, -2.2724231171365727});

//     S21Matrix result = matrix.InverseMatrix();
    
//     S21Matrix expected(2, 2);
//     expected.FillByMass(new double[4]{-3.8903511548556837, 5.001950876937927, 4.609001677592027, -6.3660020953111935});

// }