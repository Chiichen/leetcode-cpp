#include "Matrix.h"

std::istream &operator >>(std::istream& input, Matrix& matrix)
{
    input>>matrix.M11>>matrix.M12>>matrix.M21>>matrix.M22;
}


Matrix& Matrix::operator + (const Matrix& m)
{
   Matrix matrix;
   matrix.M11=this->M11+m.M11;
   matrix.M12=this->M12+m.M12;
   matrix.M21=this->M21+m.M21;
   matrix.M22=this->M22+m.M22;
   return matrix;
}
Matrix& Matrix::operator - (const Matrix& m)
{
   Matrix matrix;
   matrix.M11=this->M11-m.M11;
   matrix.M12=this->M12-m.M12;
   matrix.M21=this->M21-m.M21;
   matrix.M22=this->M22-m.M22;
   return matrix;    
}
Matrix& Matrix::operator * (const Matrix& m)
{
    Matrix matrix;
    matrix.M11=this->M11*m.M11+this->M12*m.M21;
    matrix.M12=this->M11*m.M12+this->M12*m.M22;
    matrix.M21=this->M21*m.M11+this->M22*m.M21;
    matrix.M22=this->M
}


Matrix::Matrix(/* args */)
    :M11(1),M12(0),M21(0),M22(1)
{
    
}