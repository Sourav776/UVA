#include<bits/stdc++.h>
using namespace std;
int s[100005];
int sum(long long k,long long a,long long b)
{
    long long sum=0;
    for(int i=a;i<=b;i++)
    {
        sum+=s[i]*pow(i-a+1,k);
    }
    return sum;
}

int main()
{
    int t,n,q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(s,0,sizeof(s));
        for(int i=1;i<=n;i++)
        {
            cin>>s[i];
        }
        cin>>q;
        while(q--)
        {
            long long k,a,b;
            cin>>k>>a>>b;
            cout<<sum(k,a,b)%1000000009<<endl;
        }
    }
    return 0;
}
