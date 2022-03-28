#include "Matrix.h"
#include "Matrix.cpp"
int main()
{
while(1)
{
    int a=0;
    std::cout<<"Enter 1 if want to get the answer between two matrix\n"<<"Enter 2 if want to get the products between a number and a matrix"<<std::endl;
    std::cin>>a;
    switch (a)
    {
    case 1:
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
    break;
    }
    case 2:
    {
        Matrix M;
        int a;
        std::cout<<"Enter the elements of the matrix"<<std::endl;
        std::cin>>M;
        std::cout<<"Enter the number"<<std::endl;
        std::cin>>a;
        std::cout<<"The products between the number and the matrix is "<<a*M<<std::endl;
        break;
    }
    default:
        return 0;
    }
}

}