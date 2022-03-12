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
    Matrix operator + (const Matrix& );
    Matrix operator - (const Matrix& );
    Matrix operator * (const Matrix& );
    void operator *=(const Matrix& );
    void operator +=(const Matrix& );
    void operator -=(const Matrix& );
    bool operator ==(const Matrix& ) const;
    bool operator !=(const Matrix& ) const;
    friend void operator *(const int,Matrix& );
    friend void operator *(Matrix& ,const int);
    friend std::istream &operator >>(std::istream& , Matrix&);
    friend std::ostream &operator <<(std::ostream& , Matrix&);
    void DisplayMatrix()const;
    Matrix(/* args */);
    ~Matrix();
};


#endif // !MATRIX_H


