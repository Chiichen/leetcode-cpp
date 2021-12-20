#include<iostream>
using namespace std;
int main()
{ int i, s = 0;
  for( i=0; i<5; i++ )
    switch( i )
    {case 0:  s += i;  break;       //0\1\3\5\7\9
    case 1:  s += i;  break;
    case 2:  s += i;  break;
    default: s += 2;
    }
  cout<<"s="<<s<<endl;
  int f(int=6);
  int F(int=f());
return 0;
}
