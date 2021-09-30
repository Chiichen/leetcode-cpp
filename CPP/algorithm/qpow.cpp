#include<iostream>
using namespace std;
typedef long long ll;
ll qpow(ll base,ll n){
	int ans=1;
	while(n){
		if(n&1) ans*=base;
		base*=base;
		n>>=1;
	}
	return ans;
}
int main()
{
    int base,n;
    cin>>base>>n;
    cout<<qpow(base,n);
}
