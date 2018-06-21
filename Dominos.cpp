#include<bits/stdc++.h>
using namespace std;
int n,m,cnt;
int ma[100005];
void dfs(int d)
{
     if(ma[d]) dfs(ma[d]);
     else cnt++;
}
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            ma[x]=y;
        }
        cnt=0;
        for(int i=1;i<=n;i++)
        {
            dfs(i);
        }
        cout<<cnt<<endl;
    }
    return 0;
}
