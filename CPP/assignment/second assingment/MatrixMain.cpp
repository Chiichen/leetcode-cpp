#include "Matrix.h"
#include "Matrix.cpp"
int main()
{
    std::cout<<"Enter the elements of the first matrix"<<std::endl;
    Matrix matrix1,matrix2,matrix3;
    std::cin>>matrix1;
    std::cout<<"Enter the elements of the second matrix"<<std::endl;
    std::cin>>matrix2;
    if(matrix1==matrix2)
    {
        std::cout<<"Equal"<<std::endl;
    }
    else{
        std::cout<<"Unequal"<<std::endl;
    }
    std::cout<<"The sum of them is\n";
    matrix3=matrix1+matrix2;
    matrix3.DisplayMatrix();
    std::cout<<"The product of them is\n";
    matrix3=matrix1*matrix2;
    matrix3.DisplayMatrix();
    std::cout<<"The difference between them is\n";
    matrix3=matrix1-matrix2;
    matrix3.DisplayMatrix();

}