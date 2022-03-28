#include <iostream>
#include <random>
#include<time.h>
using namespace std;
int random_unint(unsigned int min, unsigned int max, unsigned int seed)
{
  static std::default_random_engine e(seed);
  static std::uniform_int_distribution<int> u(min, max);
  return u(e);
}
class Money
{
private:
public:
  int Cents;
  Money(int&&);
  ~Money();
};
Money::Money(int&& d)
    : Cents(d)
{

}
Money::~Money()
{
}
class Adult
{
private:
public:
  Money money;
  Adult();
  ~Adult();
};

Adult::Adult()
  :money(random_unint(1000,2000,time(NULL)))
{

}
Adult::~Adult()
{

}
int main()
{
  cout<<"hello world"<<endl;
  for(int a=0; a<=100;a++)
  {
    Money money(random_unint(1000,2000,time(NULL)));
    cout<<money.Cents<<"zhichuan"<<endl;
    Adult adult;
    cout<<adult.money.Cents<<"gouzao"<<endl;
    
  }
  return 0;
}