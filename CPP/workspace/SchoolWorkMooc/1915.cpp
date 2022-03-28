#include <bits/stdc++.h>
using namespace std;
int measure(int x, int y)
{	
	int z = y;
	while(x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;	
	}
	return z;
}
int main(){
    int x0=0,y0=0;
    cin>>x0>>y0;
	int count=0;
    int k=x0*y0;
	for (int i = 2; i <= y0; i++)
	{
		int j;
		for (j = i; j <= y0; j++)
		{
			if(i*j<k)continue;
			else if(i*j>k) break;
			if(measure(i,j)==x0)
		{
			count++;
			break;
		}

		}

	}
	if(x0==y0) cout<<1;
	else cout<<count*2;
	return 0;
	
}  