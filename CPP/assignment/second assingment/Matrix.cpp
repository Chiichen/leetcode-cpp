#include "Matrix.h"

std::istream &operator >>(std::istream& input, Matrix& matrix)
{
    input>>matrix.M11>>matrix.M12>>matrix.M21>>matrix.M22;
}

std::ostream &operator <<(std::ostream& output, Matrix& matrix)
{
    output<<matrix.M11<<" "<<matrix.M12<<" "<<matrix.M21<<" "<<matrix.M22<<std::endl;
}

Matrix Matrix::operator + (const Matrix& m)
{
   Matrix matrix;
   matrix.M11=this->M11+m.M11;
   matrix.M12=this->M12+m.M12;
   matrix.M21=this->M21+m.M21;
   matrix.M22=this->M22+m.M22;
   return matrix;
}
Matrix Matrix::operator - (const Matrix& m)
{
   Matrix matrix;
   matrix.M11=this->M11-m.M11;
   matrix.M12=this->M12-m.M12;
   matrix.M21=this->M21-m.M21;
   matrix.M22=this->M22-m.M22;
   return matrix;    
}
Matrix Matrix::operator * (const Matrix& m)
{
    Matrix matrix;
    matrix.M11=this->M11*m.M11+this->M12*m.M21;
    matrix.M12=this->M11*m.M12+this->M12*m.M22;
    matrix.M21=this->M21*m.M11+this->M22*m.M21;
    matrix.M22=this->M21*m.M12+this->M22*m.M22;
    return matrix;
}
void Matrix::operator *=(const Matrix& m)
{
    *this=*this*m;
}

void Matrix::operator+=(const Matrix& m)
{
    *this = *this+m;
}

void Matrix::operator -=(const Matrix& m)
{
    *this = *this-m;
}

Matrix& operator *( Matrix& m, int num)
{
    m.M11*=num;
    m.M12*=num;
    m.M21*=num;
    m.M22*=num;
    return m;
}

Matrix& operator *(int num, Matrix& m)
{
    m.M11*=num;
    m.M12*=num;
    m.M21*=num;
    m.M22*=num;
    return m;
}

bool Matrix::operator ==(const Matrix& m)const
{
    if(M11==m.M11&&M12==m.M12&&M21==m.M21&&M22==m.M22)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool Matrix::operator!=(const Matrix& m)const
{
    return !(*this==m);
}

void Matrix::DisplayMatrix()const
{
    std::cout<<M11<<"  "<<M12<<"\n"<<M21<<"  "<<M22<<std::endl;
}


Matrix::Matrix(/* args */)
    :M11(1),M12(0),M21(0),M22(1)
{
    
}
Matrix::~Matrix()
{
    
}