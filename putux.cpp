#include<iostream>
using namespace std;
int n,k,cs;
int am[205][205];
int vis[205];
int col[205];
bool ok;

void dfs(int u,int par,int ccol)
{
    if( vis[u]==cs )
    {
        if( col[u]!=ccol )
        {
            ok=0;
        }
        return ;
    }
    vis[u]=cs;
    col[u]=ccol;
    int i;
    for(i=0;i<n;i++)
    {
        if( i==par||am[u][i]!=cs )continue;
        dfs(i,u, (ccol==1)?2:1 );
    }
}

int main()
{
    int test;
    cs=0;
//    scanf("%d",&test);
//    while(test--)
    while(scanf("%d",&n)==1&&n)
    {
        cs++;
        scanf("%d",&k);
        ok=1;
        int i,j;
        while(k--)
        {
            scanf("%d%d",&i,&j);
            am[i][j]=cs;
            am[j][i]=cs;
        }
        cout<<cs<<endl;

        for(i=0;i<n;i++)
        {
            if( vis[i]!=cs )
            {
                dfs(i,-1,1);
            }
        }
        if(ok)
        {
            printf("BICOLORABLE.\n");
//            int cnt=0;
//            for(i=1;i<=n;i++)if(col[i]==1)cnt++;
//            printf("%d\n",cnt);
//            for(i=1;i<=n;i++)if(col[i]==1)printf(" %d",col[i]);
//            printf("\n");
        }
        else
            printf("NOT BICOLORABLE.\n");
//            printf("-1\n");

    }
    return 0;
}
