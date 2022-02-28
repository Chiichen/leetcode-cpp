
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
    Book_CurrentNum=Book_TotalNum;
    std::cout<<"A book record is created"<<std::endl;
}
 Book::~Book()
{
}

//以下是Borrower类的构造和析构函数
Borrower::Borrower(std::string Id, std::string Name,int number, std::vector<std::string>BookID)
    :Borrower_Id(Id),Borrower_Name(Name),Borrower_NumberOfBooks(number),Borrower_IdsOfBooks(BookID)
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
    Library_Catalogue.AddCatalogue_Books();

    AddBorrowerData();
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
    std::cout<<"Total number of borrowers:"<<Book_BorrowerNum<<std::endl;
}




//以下是Borrower类的数据成员修改函数

std::string Borrower::GetBorrower_Id()const
{
    return Borrower_Id;
}
std::string Borrower::GetBorrower_Name()const
{
    return Borrower_Name;
}
int Borrower::GetBorrower_NumberOfBooks()const
{
    return Borrower_NumberOfBooks;
}
std::vector<std::string> Borrower::GetBorrower_IdsOfBooks()const
{
    return Borrower_IdsOfBooks;
}
void Borrower::SetBorrower_NumberOfBooks(int Num)
{
    Borrower_NumberOfBooks = Num;
}
void Borrower::SetBorrower_IdsOfBooks(std::vector<std::string>Vec)
{
    Borrower_IdsOfBooks.clear();
    Borrower_IdsOfBooks=Vec;
}


//以下是Borrower类的成员函数
void Borrower::DisplayBorrowerData()const
{
    std::cout<<"Borrower ID:"<<GetBorrower_Id()<<std::endl;
    std::cout<<"Borrower Name"<<GetBorrower_Name();
    std::cout<<"The amount of books on loan"<<GetBorrower_NumberOfBooks()<<std::endl;
    for (size_t i = 0; i < Borrower_IdsOfBooks.size(); i++)
    {
        std::cout<<"第"<<i+1<<"本书的ID为"<<Borrower_IdsOfBooks[i]<<std::endl;
    }
    

}


//以下是Catalogue类的数据成员修改及读取函数
void Catalogue::SetCatalogue_BookAmount(int Num){Catalogue_BookAmount=Num;}
void Catalogue::AddCatalogue_Books()
{
    std::string Str;
    std::cout<<"Please enter the number of books"<<std::endl;
    std::getline(std::cin,Str);
    while(is_digits(Str)==0)
    {
        std::cerr<<"Please enter a number"<<std::endl;
        std::getline(std::cin,Str);
    }
    int Amount = std::stoi(Str);
    Str.erase();
    for (size_t i = 0; i < Amount; i++)
    {
        std::cout<<"请按图书编码  书名  作者  出版年份  图书总数的顺序输入第"<<i+1<<"本图书信息"<<std::endl;
        std::getline(std::cin,Str);
        std::vector<std::string>BookDataVector=SplitString(Str,";");     
        //以下是输入信息判断部分   
        while (BookDataVector.size()!=5||!isupper(Str[0])||BookDataVector[3].size()!=4||(BookDataVector[3][0]!='1'||BookDataVector[3][0]!='2'))
        {
            while (BookDataVector.size()!=5)
            {
                BookDataVector.clear();
                std::cerr<<"The format of book data is wrong , please enter again"<<std::endl;
                std::getline(std::cin,Str);
                BookDataVector=SplitString(Str,";");
            }
            
            while(!isupper(Str[0]))
            {
                BookDataVector.clear();
                std::cerr<<"The book's Id must start with an upper letter, please enter a data again"<<std::endl;
                std::getline(std::cin,Str);
                BookDataVector=SplitString(Str,";");
            }
            while(BookDataVector[3].size()!=4||(BookDataVector[3][0]!='1'||BookDataVector[3][0]!='2'))
            {
                BookDataVector.clear();
                std::cerr<<"The publication year is wrong , please enter again"<<std::endl;
                std::getline(std::cin,Str);
                BookDataVector=SplitString(Str,";");
            }
        }
        //输入信息判断结束，确认为合法


    Book* BookData=new Book(BookDataVector[0],BookDataVector[1],BookDataVector[2],BookDataVector[3],std::stoi(BookDataVector[4]));
    auto iter = Catalogue_Books.find(BookData->GetBookId());
    Catalogue_BookAmount+=std::stoi(BookDataVector[5]);
    if(iter!=Catalogue_Books.end())
    {
        iter->second->SetBook_TotalNum(iter->second->GetBook_TotalNum()+BookData->GetBook_TotalNum());
        iter->second->SetBook_CurrentNum(iter->second->GetBook_CurrentNum()+BookData->GetBook_TotalNum());
        std::cout<<"库中已有此书籍信息，已将书籍信息更新"<<std::endl;
    }
    else
    {
        Catalogue_Books[BookData->GetBookId()]=BookData;
        std::cout<<"已录入书籍信息"<<std::endl;
    }


}
}


//以下是Catalogue类的成员函数
bool Catalogue::FindBook(std::string str)const
{
    if(Catalogue_Books.find(str)!=Catalogue_Books.end()) return true;
    else return false;
}

Book* Catalogue::GetBook(std::string str)
{
    return Catalogue_Books[str];
}

void Catalogue::DisplayBookData(std::string str)const
{
    Catalogue_Books.find(str)->second->DisplayBookData();
}
void Catalogue::DisplayBookData()const
{
    for (auto iter = Catalogue_Books.begin(); iter != Catalogue_Books.end(); iter++)
    {
        iter->second->DisplayBookData();
    }
    

}

void Catalogue::DisplayCatalogue() const
{
    std::cout<<"There are"<<Catalogue_BookAmount<<"Books in library"<<std::endl;

}
//以下是Library类的数据成员修改函数

void Library::SetLibrary_NumberOfBooksOnLoan(int Num)
{
    Library_NumberOfBooksOnLoan=Num;
}
int Library::GetLibrary_NumberOfBooksOnLoan()const
{
    return Library_NumberOfBooksOnLoan;
}

void Library::AddBorrowerData()
{
    std::cout<<"Please enter the number of borrowers"<<std::endl;
    std::getline(std::cin,Library_Input);
    while(is_digits(Library_Input)==0)
    {
        std::cerr<<"Please enter a number"<<std::endl;
        std::getline(std::cin,Library_Input);
    }
    int Amount = std::stoi(Library_Input);
    Library_NumberOfBorrowers=Amount;
    for (size_t i = 0; i < Amount; i++)
    {
        std::cout<<"请按借书人编号  借书人名字  借书数量  书籍编号顺序输入第"<<i+1<<"位借书人信息"<<std::endl;
        std::getline(std::cin,Library_Input);
        std::vector<std::string>Current_data;
        Current_data=SplitString(Library_Input,";");
        //以下是输入信息筛查部分
        bool LibExist=false;//标记图书馆中是否有此书；
        while(is_digits(Current_data[0])==0||Current_data[0].size()!=5||Current_data.size()<4||Current_data.size()!=std::stoi(Current_data[2])+3||std::stoi(Current_data[2])>5||!LibExist)
        {
            while (is_digits(Current_data[0])==0||Current_data[0].size()!=5)
            {
                Current_data.clear();
                std::cerr<<"The borrower's Id must be five digits"<<std::endl;
                std::getline(std::cin,Library_Input);
                Current_data=SplitString(Library_Input,";");
            }
            while (Current_data.size()<4)
            {
                Current_data.clear();
                std::cerr<<"借书者信息输入不全，请重新输入"<<std::endl;
                std::getline(std::cin,Library_Input);
                Current_data=SplitString(Library_Input,";");
            }
            
            while (Current_data.size()!=std::stoi(Current_data[2])+3)
            {
                Current_data.clear();
                std::cout<<"书籍信息输入有误，请重新输入"<<std::endl;
                std::getline(std::cin,Library_Input);
                Current_data=SplitString(Library_Input,";");
            }

            while (std::stoi(Current_data[2])>5)
            {
                Current_data.clear();
                std::cerr<<"借书数量不得超过五本，请归还后重试"<<std::endl;
                std::getline(std::cin,Library_Input);
                Current_data=SplitString(Library_Input,";");
            }
            while (!LibExist)
            {
                for (size_t k = 0; k < std::stoi(Current_data[2]); k++)
                {
                    if (!Library_Catalogue.FindBook(Current_data[3+k]))
                    {
                        std::cerr<<"所借图书在图书馆中未查询到，请重新输入"<<std::endl;
                        Current_data.clear();
                        std::getline(std::cin,Library_Input);
                        Current_data=SplitString(Library_Input,";");
                        break;
                    }
                    LibExist=true;
                }  
            }                 
        }

        //筛查部分结束，确认信息合法
        std::vector<std::string>CurrentBorrowBookData;
        int BookAmount=std::stoi(Current_data[2]);
        for (size_t j = 0; j < BookAmount; j++)
        {
            CurrentBorrowBookData.push_back(Current_data[3+j]);
        }
        Borrower* BorrowerData = new Borrower(Current_data[0],Current_data[1],BookAmount,CurrentBorrowBookData);
        auto iter = Library_Borrowers.find(BorrowerData->GetBorrower_Id());
        if(iter!=Library_Borrowers.end())
        {
            std::vector<std::string>NewBookDatas;
            iter->second->SetBorrower_NumberOfBooks(iter->second->GetBorrower_NumberOfBooks()+BorrowerData->GetBorrower_NumberOfBooks());
            std::cout<<"借书人信息已存在，已更新借书人信息"<<std::endl;
        }
        else
        {
        Library_Borrowers[BorrowerData->GetBorrower_Id()]=BorrowerData;
        }
        for (size_t k = 0; k < BookAmount; k++)
        {
            auto ptr = Library_Catalogue.GetBook(CurrentBorrowBookData[k]);
            ptr->SetBook_CurrentNum(ptr->GetBook_CurrentNum()-1);//并没有处理库存不足时的借书问题
        }
        Library_NumberOfBooksOnLoan+=BookAmount;

        

        
    }
}
//以下是Library类的成员函数

void Library::DisplayBookDatas()const
{
    std::cout<<"Total number of books on loan:"<<Library_NumberOfBooksOnLoan<<std::endl;
    std::cout<<"Total number of borrowers:"<<Library_NumberOfBorrowers<<std::endl;

}
void Library::DisplayBorrowersData()const
{
    for (auto iter = Library_Borrowers.begin(); iter !=Library_Borrowers.end(); iter++)
    {
        iter->second->DisplayBorrowerData();
    }
    
    
}
