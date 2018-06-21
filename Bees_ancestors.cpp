#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i;
    long long f[81]={1,1};
    for(int i=2;i<=80;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    while(cin>>i)
    {
        if(i==0) break;
        else cout<<f[i]<<endl;
    }
    return 0;
}
