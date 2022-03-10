#ifndef MATRIX_H
#define MATRIX_H

 #include<vector>
 #include<iostream>
 #include<algorithm>

class Matrix
{
private:
    int M11,M12,M21,M22;
public:
    Matrix& operator + (const Matrix& matrix);
    Matrix& operator - (const Matrix& matrix);
    Matrix& operator * (const Matrix& matrix);
    friend std::istream &operator >>(std::istream& , Matrix&);
    Matrix(/* args */);
    ~Matrix();
};

Matrix::Matrix(/* args */)
{
}

Matrix::~Matrix()
{
}

#endif // !MATRIX_H


