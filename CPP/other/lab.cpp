#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a=1;
	int b=1;
	try
	{
		if(a==1)
		{
			throw logic_error("a equals 1");
		}
		if(a==b)
		{
			throw logic_error("a equals b");
		}
	}
	catch(const std::logic_error& e)
	{
		std::cerr << e.what() << '\n';
	}
	void(&cin)
	{

	}
	
}
