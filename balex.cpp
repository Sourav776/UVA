#include<iostream>
using namespace std;
int n,k,cs;
int am[205][205];
int visit[205],color[205];
bool ok;
void fuck(int u,int par,int col)
{
    if(visit[u]==cs)
    {
        if(color[u]!=col)
        {
            ok=0;
        }
        return ;
    }
    visit[u]=cs;
    color[u]=col;
    for(int i=0;i<n;i++)
    {
        if(i==par || am[u][i]!=cs) continue;
        fuck(i,u,(col==1)?2:1);
    }

}
int main()
{
    cs=0;
    while(scanf("%d",&n)==1 && n)
    {
        cs++;
        ok=1;
        int i,j;
        cin>>k;
        while(k--)
        {
            cin>>i>>j;
            am[i][j]=cs;
            am[j][i]=cs;
        }
        for(i=0;i<n;i++)
        {
            if(visit[i]!=cs)
            {
                fuck(i,-1,1);
            }
        }
        if(ok)
        {
            cout<<"BICOLORABLE."<<endl;
        }
        else
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
    }
}
