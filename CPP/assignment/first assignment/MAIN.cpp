//!!!!!!!!注意！请使用编译器调试模式打开，不要使用控制台打开，否则会由于编码问题出现中文乱码。



#include "Library.h"
#include "Library.cpp"
#include <cstdlib>
int main()
{
   
    std::system("chcp 65001");//为了在cmd控制台打开时不出现乱码
    Library lib;
    while (1)
    {
        int Exp=0;
        std::cout<<"按1图书入库"<<std::endl;
        std::cout<<"按2打印现有全部书籍信息"<<std::endl;
        std::cout<<"按3借书"<<std::endl;
        std::cout<<"按4打印现有借书人信息"<<std::endl;
        std::cout<<"按5查询书籍"<<std::endl;
        std::cout<<"按6退出程序"<<std::endl;
        std::cin>>Exp;
        switch (Exp)
        {
        case 1:
            {
                lib.Library_Catalogue.AddCatalogue_Books();
                break;
            }

        
        case 2:
        {
            lib.Library_Catalogue.DisplayBookData();
            break;

        }
        case 3:
        {
            lib.AddBorrowerData();
            break;            
        }
            

        case 4:
        {
            lib.DisplayBorrowersData();
            break;            
        }

        case 5:
        {
            std::string ID;
            std::cout<<"请输入书籍ID"<<std::endl;
            std::cin.ignore();
            std::getline(std::cin,ID);
            std::cout<<ID;
            if (!lib.Library_Catalogue.FindBook(ID))
            {
                std::cerr<<"The book is not found"<<std::endl;
            }
            else
            {
            lib.Library_Catalogue.DisplayBookData(ID);                
            }
            break;
        }
            

        case 6:
        {
            return 0;
        }
        break;
        default:
            break;
        }
    }
    
    return 0;
}