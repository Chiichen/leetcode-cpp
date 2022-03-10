#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <iostream>




class Book
{
private:
    /* data */
    int Book_TotalNum=0;
    int Book_CurrentNum=0;
    int Book_BorrowerNum=0;
    std::string Book_Id;
    std::string Book_Author_Name;
    std::string Book_PublicationYear;
    std::string Book_Tittle;
public:
    void SetBook_TotalNum(int);
    void SetBook_CurrentNum(int);
    void SetBook_Id(std::string);
    void SetBook_Author_Name(std::string);
    void SetBook_PublicationYear(std::string);
    void SetBook_Tittle(std::string);
    void SetBook_BorrowerNum(int);
    int GetBook_BorrowerNum()const;
    std::string GetBookId()const;
    int GetBook_TotalNum()const;
    int GetBook_CurrentNum()const;
    void DisplayBookData()const;//输出书籍信息
    Book(std::string, std::string, std::string, std::string ,int);
    ~Book();
};




class Borrower
{
private:
    /* data */
    std::string Borrower_Id;
    std::string Borrower_Name;
    int Borrower_NumberOfBooks;//The number of the books loaned by the borrower
    std::vector<std::string>Borrower_IdsOfBooks;


public:
    void DisplayBorrowerData()const;
    void SetBorrower_NumberOfBooks(int);
    void SetBorrower_IdsOfBooks(std::vector<std::string>);
    int GetBorrower_NumberOfBooks()const;
    std::string GetBorrower_Name()const;
    std::vector<std::string>GetBorrower_IdsOfBooks()const;
    std::string GetBorrower_Id()const;
    Borrower(std::string Id, std::string Name, int number, std::vector<std::string>BookID);
    ~Borrower();
};





class Catalogue
{
private:
    /* data */
    int Catalogue_BookAmount=0;
    std::string Catalogue_Input;
    std::map<std::string,Book*>Catalogue_Books;

public:
    bool FindBook(std::string)const;
    int GetCatalogue_BookNum()const;
    Book* GetBook(std::string);
    void SetCatalogue_BookAmount(int);
    void AddCatalogue_Books();
    Catalogue(/* args */);
    ~Catalogue();
    void DisplayCatalogue() const;
    void DisplayBookData(std::string)const;
    void DisplayBookData()const;

};




class Library
{
private:
    /* data */
    int Library_NumberOfBooksOnLoan=0;//借出书总数
    int Library_NumberOfBorrowers=0;//借书人总数
    std::map<std::string,Borrower*>Library_Borrowers;//借书人
    std::string Library_Input;
public:
    Library(/* args */);
    ~Library();
    void DisplayBookDatas()const;
    void SetLibrary_NumberOfBooksOnLoan(int);
    int GetLibrary_NumberOfBooksOnLoan()const;
    void DisplayBorrowersData()const;
    void AddBorrowerData();
    Catalogue Library_Catalogue;
    
};





#endif // ! 