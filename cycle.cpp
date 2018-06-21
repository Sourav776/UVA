#include<iostream>
using namespace std;

int visit[20],par[20],n,m,edge[22][22],loop,last;


void prnt(int v,int u)
{

    if(v==u)
    {
        cout<<v<<endl;
        return;
    }
    else
    {
        cout<<v<<endl;
        prnt(par[v],u);
    }
}

void cycle(int node)
{
    bool cyc=false;
    visit[node]=1;
    int v;
    for(v=1;v<=n;v++)
    {
        if(edge[node][v]==1)
        {
            if(visit[v]==0)
            {
                par[v]=node;
                cycle(v);
            }
            else if(visit[v]==1)
            {
                cyc=true;
                loop=1;
                break;
            }
        }
    }
    visit[node]=2;
    if(cyc)
    {
        prnt(node,v);
        return;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++) edge[i][j]=0;
        }
        for(int i=0; i<m; i++)
        {
            int a,b;
            cin>>a>>b;
            edge[a][b]=1;
        }
        for(int i=1; i<=n; i++) visit[i]=0;
        for(int i=1; i<=n; i++) par[i]=0;
        loop=0;
        cycle(1);
        if(loop==1)
        {
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;

    }
}
