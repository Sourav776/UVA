#include<bits/stdc++.h>
using namespace std;
#define n 1000000
int  prime[n];
void sieve()
{

   prime[0]=prime[1]=0;
    for(int i=2;i<=n;i++)
    {
       prime[i]=1;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
       if(prime[i])
       {
           for(int k=i*i;k<=n;k+=i)
            prime[k]=0;
       }
    }
    prime[2]=0;
}
int main()
{
    sieve();
    int t;
    while(cin>>t && t)
    {
        int c,d;
        for(int i=3;i<t;i++)
        {
            if(prime[i]) {c=i;d=t-c;}
            if(prime[d]) {cout<<t<<" = "<<c<<" + "<<d<<endl;break;}
        }
    }
    return 0;
}
