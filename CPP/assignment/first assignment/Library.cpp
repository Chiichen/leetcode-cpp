
#include"Library.h"
#include <algorithm>


bool is_digits(const std::string &str)
{
    return std::all_of(str.begin(), str.end(), ::isdigit); // 判断是否全为数字
}

//以下是Book类的构造和析构函数
 Book::Book(std::string Id, std::string Tittle, std::string FirstName, std::string Lastname, std::string YearPublished,int NumberOfCopies)
    : Book_Id(Id),Book_Tittle(Tittle),Book_Author_FirstName(FirstName),Book_Author_LastName(Lastname),Book_PublicationYear(YearPublished),Book_TotalNum(NumberOfCopies)
{
    std::cout<<"A book record is created"<<std::endl;
}
 Book::~Book()
{
}

//以下是Borrower类的构造和析构函数
Borrower::Borrower(std::string Id, std::string FirstName, std::string Lastname, int number, std::vector<std::string>BookID)
{
    std::cout<<"A borrower's information has been added"<<std::endl;
}

Borrower::~Borrower()
{
}

//以下是Catalogue类的构造和析构函数
Catalogue::Catalogue(/* args */)
{
}

Catalogue::~Catalogue()
{
}

//以下是Library类的构造和析构函数
Library::Library(/* args */)
{   
    
    std::cout<<"Welcome to the library system"<<std::endl;
    std::cout<<"Please enter the number of books"<<std::endl;
    std::getline(std::cin,Library_Input);
    while(is_digits(Library_Input)==0)
    {
        std::cout<<"Please enter a number"<<std::endl;
        std::getline(std::cin,Library_Input);
    }
    Library_Catalogue.SetCatalogue_BookAmount(std::stoi(Library_Input));
    Library_Input.erase();
    for (size_t i = 0; i < ; i++)
    {
        /* code */
    }
    

}

Library::~Library()
{
    
}





//以下是Book类的数据成员修改函数

void Book::SetBook_TotalNum(int Num){Book_TotalNum=Num;}
void Book::SetBook_CurrentNum(int Num){Book_CurrentNum=Num;}
void Book::SetBook_Id(std::string Str){Book_Id=Str;}
void Book::SetBook_Author_FirstName(std::string Str){Book_Author_FirstName=Str;}
void Book::SetBook_Author_LastName(std::string Str){Book_Author_LastName;}
void Book::SetBook_PublicationYear(std::string Str){Book_PublicationYear=Str;}
void Book::SetBook_Tittle(std::string Str){Book_Tittle=Str;}

//以下是Book类的成员函数
void Book::DisplayBookData()const
{
    
    std::cout<<"Title:"<<Book_Tittle<<std::endl;
    std::cout<<"Author:"<<Book_Author_FirstName<<Book_Author_LastName<<std::endl;
    std::cout<<"Year published:"<<Book_PublicationYear<<std::endl;
    std::cout<<"Total number of copies:"<<Book_TotalNum<<std::endl;
    std::cout<<"Number available for loan:"<<Book_CurrentNum<<std::endl;
    std::cout<<"Total number of borrowers:"<<Book_CurrentNum<<std::endl;
}


std::string Book::GetBookId()const
{
    return Book_Id;
}



//以下是Borrower类的数据成员修改函数



//以下是Borrower类的成员函数


//以下是Catalogue类的数据成员修改函数
void Catalogue::SetCatalogue_BookAmount(int Num){Catalogue_BookAmount=Num;}
void Catalogue::AddCatalogue_Books(std::string Str)
{

}


//以下是Catalogue类的成员函数


void Catalogue::DisplayCatalogue() const
{
    
}
//以下是Library类的数据成员修改函数

void Library::DisplayBookDatas()const
{
    std::cout<<"Total number of books on loan:"<<Library_NumberOfBooksOnLoan<<std::endl;
    std::cout<<"Total number of borrowers:"<<Library_NumberOfBorrowers<<std::endl;

}
//以下是Library类的成员函数