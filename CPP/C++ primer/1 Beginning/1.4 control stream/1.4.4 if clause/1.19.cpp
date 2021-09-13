#include<iostream> 
int main()
{
   int val1 = 0,val2 = 0;
   std::cout<<"Plz enter 2 number"<<std::endl;
   std::cin>>val1>>val2;
   if(val1<val2){
       int curval = val1;
       while(curval<=val2){
           std::cout<<curval<<std::endl;
           curval++;
        } 
        std::cout<<"That's all number between "<<
        val1<<" and "<<val2;
   } 
   else{
       int curval = val2;
       while(curval<=val1){
           std::cout<<curval<<std::endl;
           curval++;
        } 
        std::cout<<"That's all number between "<<
        val2<<" and "<<val1;
   }
   return 0;
}