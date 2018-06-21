#include<iostream>
#include<cstring>
using namespace std;
int n,k,res;
int g[105][105],color[105],ans[105];

void create_graph()
{
    int a,b;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        g[a][b]=1;
        g[b][a]=1;
    }

}
int check(int curr)
{
    for(int i=1;i<=n;i++)
    {
        if(g[curr][i] && color[i])
            return 0;
    }
        return 1;
}
void dfs(int curr)
{
    if(curr>n)
    {
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(color[i]) cnt++;
        }
        if(cnt>res)
        {
            res=cnt;
            for(int i=1,j=0;i<=n;i++)
                if(color[i])
                ans[j++]=i;
        }
        return ;

    }
    else
    {
        color[curr]=0;
        dfs(curr+1);
        color[curr]=1;
        if(check(curr)) dfs(curr+1);
        color[curr]=0;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(g,0,sizeof(g));
        memset(color,0,sizeof(color));
        memset(ans,0,sizeof(ans));
        res=0;
        create_graph();
        dfs(1);
        cout<<res<<endl;
        for(int i=0;i<res;i++)
        {
            if(i!=res-1)
                cout<<ans[i]<<' ';
            else
            cout<<ans[i];
        }
        cout<<endl;
    }
}
