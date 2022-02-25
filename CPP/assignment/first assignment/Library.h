#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <iostream>




class Catalogue
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
    Catalogue Library_Catalogue;
public:
    Library(/* args */);
    ~Library();
    void DisplayBookDatas()const;
};

Library::Library(/* args */)
{
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
    
    
public:
    std::string GetBookId()const;
    void DisplayBookData(std::string)const;//接受BookId输出书籍信息
    Book(/* args */);
    ~Book();
};
 Book::Book(/* args */)
{
}
 Book::~Book()
{
}




class Borrower
{
private:
    /* data */
    std::string Borrower_Id;
    int Borrower_FirstName;
    int Borrower_LastName;
    int Borrower_NumberOfBooks;//The number of the books loaned by the borrower
    std::vector<std::string>Borrower_IdsOfBooks;


public:
    Borrower(/* args */);
    ~Borrower();
};

Borrower::Borrower(/* args */)
{
}

Borrower::~Borrower()
{
}




#endif // ! 