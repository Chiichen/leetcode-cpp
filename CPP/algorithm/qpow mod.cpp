#include<iostream>
using namespace std;
typedef long long ll;
ll qpow(ll base,ll n,ll mod){
	int ans=1;
	while(n){
		if(n&1) ans*=base%mod;
		base*=base;
		n>>=1;
        if(base>mod)
        {
            base=base%mod;
        }
	}
	return ans%mod;
}
int main()
{
    int base,n,mod;
    cin>>base>>n>>mod;
    cout<<qpow(base,n,mod);
}
