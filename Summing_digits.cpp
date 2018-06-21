#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int func (int a)
{
    int r,s;
    r=a%10;
    s=a/10;
    if(s>0) a=r+func(s);
    else return r+s;
}
int main()
{
    int n;
    while(cin>>n && n!=0)
    {
          int b=func(func(n));
          cout<<func(b)<<endl;
    }
    return 0;
}
