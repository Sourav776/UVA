#include<bits/stdc++.h>
using namespace std;
int flip(int ar[],int n)
{
    pair <int ,int> pos[n];
    for(int i=0;i<n;i++)
    {
        pos[i].first=ar[i];
        pos[i].second=i;
    }
    sort(pos,pos+n);
    //for(int i=0;i<n;i++) cout<<pos[i].first<<" "<<pos[i].second<<endl;
    int ans=0;
    vector<bool>vis(n,false);
    for(int i=0;i<n;i++)
    {
        if(vis[i] || pos[i].second==i) continue;
        int cyc=0;
        int j=i;
        while(!vis[j])
        {
            vis[j]=1;
            j=pos[j].second;
            cyc++;
        }
        ans+=cyc-1;
    }
    return ans;
}
int main()
{
    int n;
    int ar[1005];
    while(cin>>n)
    {
        int ans=0;
        for(int i=0;i<n;i++)
            cin>>ar[i];

       cout<<"Minimum exchange operations : "<<ans<<endl;
    }
    return 0;
}
