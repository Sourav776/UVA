#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int q,m,n,cnt=0;
    while(cin>>s)
    {
        cin>>q;
        cout<<"Case "<<++cnt<<":"<<endl;
        while(q--)
        {
            bool zero=true,one=true;
            cin>>m>>n;
            int x=min(m,n);
            int y=max(m,n);
            for(int i=x;i<=y;i++)
            {
                if((s[i]-'0')^0==1) {one=false;}
                if((s[i]-'0')^1==1){zero=false;}
            }
            if((!one && zero) || (one && !zero)) cout<<"Yes"<<endl;
            else  cout<<"No"<<endl;
        }
    }
    return 0;
}
