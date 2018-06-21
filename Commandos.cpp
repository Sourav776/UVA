#include<bits/stdc++.h>
using namespace std;
#define inf 50000
int ar[105][105];
int main()
{
    int t,cnt=0,N,R,src,des,dis,ans;
    int u,v;
    cin>>t;
    while(t--)
    {
        cin>>N>>R;
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
        {
            if(i==j) ar[i][j]=0;
            else ar[i][j]=inf;
        }
        for(int i=0;i<R;i++)
        {
            cin>>u>>v;
            ar[u][v]=1;
            ar[v][u]=1;
        }
        for(int k=0;k<N;k++)
            for(int i=0;i<N;i++)
              for(int j=0;j<N;j++)
                {
                 dis=ar[i][k]+ar[k][j];
                 if(dis<ar[i][j]) ar[i][j]=dis;
                }
        cin>>src>>des;
        ans=0;
       for(int i=0;i<N;i++)
       {
           ans=max(ans,ar[src][i]+ar[i][des]);
       }

        cout<<"Case "<<++cnt<<": "<<ans<<endl;
    }
    return 0;
}
