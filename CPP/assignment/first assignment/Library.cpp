
#include"Library.h"
#include <algorithm>
#include <cstring>
#include <ctype.h>

std::vector<std::string> SplitString(const std::string &str, const std::string &pattern)//从书籍或借书人字符串中读取信息
{
    char * strc = new char[std::strlen(str.c_str())+1];
    strcpy(strc, str.c_str());   //string转换成C-string
    std::vector<std::string> res;
    char* temp = strtok(strc, pattern.c_str());
    while(temp != NULL)
    {
        res.push_back(std::string(temp));
        temp = strtok(NULL, pattern.c_str());
    }
    delete[] strc;
    return res;
}


bool is_digits(const std::string &str)
{
    return std::all_of(str.begin(), str.end(), ::isdigit); // 判断是否全为数字
}

//以下是Book类的构造和析构函数
 Book::Book(std::string Id, std::string Tittle, std::string Name, std::string YearPublished,int NumberOfCopies)
    : Book_Id(Id),Book_Tittle(Tittle),Book_Author_Name(Name),Book_PublicationYear(YearPublished),Book_TotalNum(NumberOfCopies)
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
        std::cerr<<"Please enter a number"<<std::endl;
        std::getline(std::cin,Library_Input);
    }
    int Amount = std::stoi(Library_Input);
    Library_Catalogue.SetCatalogue_BookAmount(Amount);
    Library_Input.erase();
    for (size_t i = 0; i < Amount; i++)
    {
        std::cout<<"请按图书编码  书名  作者  出版年份  图书总数的顺序输入第"<<i+1<<"本图书信息"<<std::endl;
        std::getline(std::cin,Library_Input);
        while(!isupper(Library_Input[0]))
        {
            std::cerr<<"The book's Id must start with an upper letter, please enter a data again"<<std::endl;
            std::getline(std::cin,Library_Input);
        }
        Library_Catalogue.AddCatalogue_Books(Library_Input);
    }
    

}

Library::~Library()
{
    
}





//以下是Book类的数据成员修改及读取函数

void Book::SetBook_TotalNum(int Num){Book_TotalNum=Num;}
void Book::SetBook_CurrentNum(int Num){Book_CurrentNum=Num;}
void Book::SetBook_Id(std::string Str){Book_Id=Str;}
void Book::SetBook_Author_Name(std::string Str){Book_Author_Name=Str;}
void Book::SetBook_PublicationYear(std::string Str){Book_PublicationYear=Str;}
void Book::SetBook_Tittle(std::string Str){Book_Tittle=Str;}
std::string Book::GetBookId()const{return Book_Id;}
int Book::GetBook_TotalNum()const {return Book_TotalNum;}
int Book::GetBook_CurrentNum()const {return Book_CurrentNum;}


//以下是Book类的成员函数
void Book::DisplayBookData()const
{
    
    std::cout<<"Title:"<<Book_Tittle<<std::endl;
    std::cout<<"Author:"<<Book_Author_Name<<std::endl;
    std::cout<<"Year published:"<<Book_PublicationYear<<std::endl;
    std::cout<<"Total number of copies:"<<Book_TotalNum<<std::endl;
    std::cout<<"Number available for loan:"<<Book_CurrentNum<<std::endl;
    std::cout<<"Total number of borrowers:"<<Book_CurrentNum<<std::endl;
}




//以下是Borrower类的数据成员修改函数



//以下是Borrower类的成员函数


//以下是Catalogue类的数据成员修改及读取函数
void Catalogue::SetCatalogue_BookAmount(int Num){Catalogue_BookAmount=Num;}
void Catalogue::AddCatalogue_Books(std::string Str)
{
    std::vector<std::string>BookDataVector=SplitString(Str,";");
    Book* BookData=new Book(BookDataVector[0],BookDataVector[1],BookDataVector[2],BookDataVector[3],std::stoi(BookDataVector[4]));
    auto iter = Catalogue_Books.find(BookData->GetBookId());
    if(iter!=Catalogue_Books.end())
    {
        iter->second->SetBook_TotalNum(iter->second->GetBook_TotalNum()+BookData->GetBook_TotalNum());
        std::cout<<"库中已有此书籍信息，已将书籍信息更新"<<std::endl;
    }
    else
    {
        Catalogue_Books[BookData->GetBookId()]=BookData;
        std::cout<<"已录入书籍信息"<<std::endl;
    }


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