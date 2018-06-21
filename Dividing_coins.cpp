#include<bits/stdc++.h>
using namespace std;
int coin[105],ans[50005];
int fuck(int n, int hal)
{
    for(int i=0;i<=hal;i++) {ans[i]=0;}

    for(int i=0;i<n;i++)
    {
        for(int j=hal;j>0;j--)
        {
            if(coin[i]<=j)
            {
                ans[j]=max(ans[j],coin[i]+ans[j-coin[i]]);
            }
        }
    }
    return ans[hal];
}
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>coin[i];
            sum+=coin[i];
        }
        cout<<sum-2*fuck(n,sum/2)<<endl;
    }
    return 0;
}
