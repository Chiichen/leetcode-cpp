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
    ll a,b;
    cin>>a>>b;
    ll n=qpow(a,b,7);
    switch(n)
    {
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednsday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Satursay";
            break;
        case 0:
            cout<<"Sunday";
            break;

    }
}