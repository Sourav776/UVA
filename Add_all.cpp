#include<bits/stdc++.h>
using namespace std;
int ar[5005],cost[5005];
int n;
int main()
{
    int ar[5005];

    while(cin>>n && n)
    {
        long sum=0;
        memset(ar,0,sizeof(ar));
        for(int i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        cost[0]=0;
    for (int i=1;i<n;i++)
        cost[i-1]+=ar[i]+ar[i-1];
        for(int i=1;i<n;i++)
        {cout<<cost[i]<<endl;
            sum+=cost[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
