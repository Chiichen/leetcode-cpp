#include"Library.h"
void Catalogue::DisplayCatalogue() const
{
    
}
void Library::DisplayBookDatas()const
{
    std::cout<<"当前借出的书籍总数为："<<Library_NumberOfBooksOnLoan<<std::endl;
    std::cout<<"当前借书人总数为："<<Library_NumberOfBorrowers<<std::endl;
    
}