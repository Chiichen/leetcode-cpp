#include"Library.h"
void Catalogue::DisplayCatalogue() const
{
    
}


void Library::DisplayBookDatas()const
{
    std::cout<<"Total number of books on loan:"<<Library_NumberOfBooksOnLoan<<std::endl;
    std::cout<<"Total number of borrowers:"<<Library_NumberOfBorrowers<<std::endl;

}


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