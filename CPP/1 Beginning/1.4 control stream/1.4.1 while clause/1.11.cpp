#include<iostream>
int main(){
int v1=0,v2=0;
std::cout<<"plz enter two number from small to large"<<std::endl;
std::cin>>v1>>v2;
int val = v1;
while(val<=v2){
    std::cout<<val<<std::endl;
    ++val;
    }
    return 0;
}
