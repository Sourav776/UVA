#include<iostream>
#include<stdio.h>
using namespace std;
int fuck(int a)
{
    int res;
    if(a<=100) res=91;
    else res=a-10;

    return res;
}
int main()
{
    int a;
    while(scanf("%d",&a)==1 && a!=0)
    {
       printf("f91(%d) = %d\n",a,fuck(a));}
    return 0;
}
