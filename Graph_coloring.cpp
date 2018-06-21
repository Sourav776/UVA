#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#define much 102
int color[much],n;
vector<int>adj[much];
vector<int>ans;
void dfs(int u,vector<int>tmp)
{
    vector<int>save;
    color[u]=-1;tmp.push_back(u);
    for(int j=0;j<adj[u].size();j++)
    {
        int v=adj[u][j];
        if(color[v]==0)
        {
            color[v]=1;
            save.push_back(v);
        }
    }
    bool found=false;
    for(int v=u+1;v<n;v++){
        if(color[v]==0)
    {
        dfs(v,tmp);
        found=true;
        break;
    }
    }
    if(!found && ans.size()<tmp.size()) {ans=tmp;}
    for(int j=0;j<save.size();j++)
    {
        color[save[j]]=0;
        color[u]=1;
        tmp.pop_back();
    }
    for(int v=u+1;v<n;v++)
    {
        if(color[v]==0)
        {
            dfs(v,tmp);
            break;
        }
    }
    color[u]=0;
}

int main()
{
    int t,k,u,v;
    cin>>t;
    while(t--)
    {
         cin>>n>>k;
         for(int i=0;i<n;i++)
         {
             adj[i].clear();color[i]=0;
         }
         while(k--)
         {
             cin>>u>>v;
             adj[u].push_back(v);adj[v].push_back(u);
         }
         ans.clear();
         dfs(1,ans);
         cout<<ans.size()<<endl;
         for(int i=0;i<ans.size();i++)
         {
             cout<<ans[i];
         }
    }
    return 0;
}
