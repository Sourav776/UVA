#include<bits/stdc++.h>
#define ll long long
ll ar[5005];
ll fibo(ll n)
{
    if(ar[n]!=-1) return ar[n];
    else
    {
        ar[n]=fibo(n-1)+fibo(n-2);
        return ar[n];
    }
}
using namespace std;
int main()
{
    ll m;
    memset(ar,-1,sizeof(ar));
    ar[0]=0;
    ar[1]=1;
    while(1)
    {
        cin>>m;
        cout<<fibo(m)<<endl;
    }

    return 0;
}
