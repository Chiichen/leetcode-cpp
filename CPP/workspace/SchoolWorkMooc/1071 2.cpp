#include<iostream>
using namespace std;
long long fib(int n, int first, int second) {
    if (n <= 1) {
         return first;
 
    } 
    else {
        return fib(n-1,second,first+second);
    }

}
int main()
{
    int n=1,first=1,second=1;
    cin>>n;
    if(n<=2){
        cout<<1<<endl;
    }
    else{
        cout<<fib(n,first,second);
    }
    return 0;
}