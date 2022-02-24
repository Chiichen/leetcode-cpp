#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include <vector>




class Catalogue
{
private:
    /* data */

public:
    Catalogue(/* args */);
    ~Catalogue();
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
    int Library_NumberOfBooksOnLoan;
    int Library_NumberOfBorrowers;
    std::vector<Borrower>Library_Borrowers;
    

public:
    Library(/* args */);
    ~Library();
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
    int Borrower_Id;
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