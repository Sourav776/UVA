#include<bits/stdc++.h>
using namespace std;
int ar[33000];
int pot[33000];
int main()
{
    int n;
    while(cin>>n)
    {
        int ma=0;
        int k=(1<<n);
        for(int i=0;i<k;i++) cin>>ar[i];

        memset(pot,0,sizeof(pot));

        for(int i=0;i<k;i++)
            for(int j=0;j<n;j++)
            pot[i]+=ar[i^(1<<j)];

        for(int i=0;i<k;i++)
        {
            for(int j=0;j<n;j++)
            {
                ma=max(ma,pot[i]+pot[i^(1<<j)]);
            }
        }
        cout<<ma<<endl;
    }
    return 0;
}
