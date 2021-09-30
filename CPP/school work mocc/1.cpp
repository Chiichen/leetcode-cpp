# include <iostream>
using namespace std;
int f(int k)
{
        int a[47];
	a[1] = a[2] = 1;
	if (k <= 2)
		return 1;
	else
		return (f(k-1) + f(k-2));
}
int main()
{
    int a[47]={0};
	int k;
	cin >> k;
	f(k);
	cout << f(k);
}
