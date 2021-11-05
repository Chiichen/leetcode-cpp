#include<iostream>
int main()
{
    int i =0;
    scanf("%d",&i);
    const int *p=&i;
    printf("%d\n",*p);
    return 0;
}