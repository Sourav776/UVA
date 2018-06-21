#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n;
    int a[30005],u[30005];
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(int i=1;i<=m;i++) cin>>a[i];
        int p=0;
        for(int i=1;i<=n;i++)
        {
            cin>>u[i];
            int x=u[i];
            sort(a+1,a+x+1);
           // for(int j=1;j<=x;j++) cout<<a[j]<<" ";
            cout<<a[++p]<<endl;
            //cout<<endl;
        }
    }
    return 0;
}
