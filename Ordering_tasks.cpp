#include<bits/stdc++.h>
using namespace std;
int n;
int order[120][120],indegree[120],taken[120];


void topsort()
{
    vector<int>task;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(!taken[j] && !indegree[j])
            {
                taken[j]=1;
                task.push_back(j);
                for(k=1;k<=n;k++)
                    if(order[j][k])
                            --indegree[k];
                break;
            }
        }
    }
    cout<<task[0];
    for(i=1;i<n;i++)
    cout<<" "<<task[i];
    cout<<endl;
    task.clear();
}

int main()
{
int a,b,i,m;
while(cin>>n>>m)
{
    if(n==0 && m==0)    break;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        order[a][b]=1;
        indegree[b]++;
    }
topsort();
memset(order,0,sizeof(order));
memset(indegree,0,sizeof(indegree));
memset(taken,0,sizeof(taken));
}
return 0;
}
