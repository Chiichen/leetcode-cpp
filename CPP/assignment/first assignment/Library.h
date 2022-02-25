#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <iostream>




class Catalogue:public Library
{
private:
    /* data */

    int Catalogue_BookAmount;
    std::map<std::string,Book>Catalogue_Books;

public:
    Catalogue(/* args */);
    ~Catalogue();
    void DisplayCatalogue() const;


};

Catalogue::Catalogue(/* args */)
{
}

Catalogue::~Catalogue()
{
}




class Library
{
private:
    /* data */
    int Library_NumberOfBooksOnLoan;//借出书总数
    int Library_NumberOfBorrowers;//借书人总数
    std::vector<Borrower>Library_Borrowers;//借书人
public:
    Library(/* args */);
    ~Library();
    void DisplayBookDatas()const;
};

Library::Library(/* args */)
{
    Catalogue Library_Catalogue;   
    std::cout<<"Welcome to the library system"<<std::endl;
}

Library::~Library()
{
    
}




class Book
{
private:
    /* data */
    int Book_TotalNum;
    int Book_CurrentNum;
    std::string Book_Id;
    std::string Book_Author_FirstName;
    std::string Book_Author_LastName;
    std::string Book_PublicationYear;
    std::string Book_Tittle;
public:
    std::string GetBookId()const;
    void DisplayBookData()const;//输出书籍信息
    Book(std::string, std::string, std::string, std::string, std::string ,int);
    ~Book();
};

 Book::Book(std::string Id, std::string Tittle, std::string FirstName, std::string Lastname, std::string YearPublished,int NumberOfCopies)
    : Book_Id(Id),Book_Tittle(Tittle),Book_Author_FirstName(FirstName),Book_Author_LastName(Lastname),Book_PublicationYear(YearPublished),Book_TotalNum(NumberOfCopies)
{
    std::cout<<"A book is created"<<std::endl;
}
 Book::~Book()
{
}




class Borrower
{
private:
    /* data */
    std::string Borrower_Id;
    std::string Borrower_FirstName;
    std::string Borrower_LastName;
    int Borrower_NumberOfBooks;//The number of the books loaned by the borrower
    std::vector<std::string>Borrower_IdsOfBooks;


public:
    Borrower(std::string Id, std::string FirstName, std::string Lastname, int number, std::vector<std::string>BookID);
    ~Borrower();
};

Borrower::Borrower(std::string Id, std::string FirstName, std::string Lastname, int number, std::vector<std::string>BookID)
{
    std::cout<<"A borrower's information has been added"<<std::endl;
}

Borrower::~Borrower()
{
}




#endif // ! 