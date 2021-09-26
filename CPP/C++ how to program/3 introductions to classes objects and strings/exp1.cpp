#include<iostream>
#include<string>
using namespace std;
class GradeBook
{
public:    
    void setGradeBook(string name)
    {
        Coursename = name;
    }

    string getCourseName () const
    {
        return Coursename;
    }
    void DisplayGradeBook()const
    {
        cout<<getCourseName()<<endl;
    }
private:
    string Coursename;
};

int main()
{
    string NameofCourse;
    GradeBook MyGradeBook;

    cout<<"Initial grade book is "<<MyGradeBook.getCourseName()<<endl;

    getline(cin,NameofCourse);
    MyGradeBook.setGradeBook(NameofCourse);
    MyGradeBook.DisplayGradeBook();
    return 0;

}