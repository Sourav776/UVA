#include<bits/stdc++.h>
using namespace std;
int c[1001];
vector <int> am[1001];
int cnt;
bool ok;
int n;
void fuck (int ch)
{
    cnt=0;
    int m;
    for(int i=1;i<n;i++)
        if(ch==c[i] && am[ch]==0)
    {
        m=max(c[i],c[i+1]);
        cnt++;
    }

    cout<<cnt<<endl;
    if(cnt>=3)
    {
       ok=1;
    }
    else
    {
        ok=0;
        return ;
    }
   if(m<ch)
    {
        ch=ch+1;
        fuck(ch);
    }
}
int main()
{
    while(cin>>n)
    {
    memset(c,0,sizeof(c));
     memset(am,0,sizeof(am));
    for(int i=1;i<n;i++)
    {
        cin>>c[i];
        int v=c[i];
        am[i].push_back(v);
    }
    fuck(1);
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}
