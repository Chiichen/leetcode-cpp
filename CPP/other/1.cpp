#include <bits/stdc++.h>
using namespace std;
int a[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
int main()
{
for (int i = 0; i < 3; i++)
{
    int *p=a[i];
    for (int j = 0; j < 5; j++)
	{
		cout<<*p<<endl;
		p++;
	}
	
}
return 0;
  
}