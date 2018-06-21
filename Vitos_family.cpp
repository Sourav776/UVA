#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[555],sum;
    cin>>t;
    while(t--)
    {
        int p=5000000000;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=abs(a[i]-a[j]);
            }
            p=min(p,sum);
        }
        cout<<p<<endl;
    }
    return 0;
}
