#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,q,ca=0,a;
    int ar[10005];
    while(cin>>n>>q && n && q)
    {
        memset(ar,0,sizeof(ar));
        ll cnt;
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        cout<<"CASE# "<<++ca<<":"<<endl;
        bool b;
        for(ll i=0;i<q;i++)
        {
            cin>>a;
            b=false;
            cnt=1;
            for(ll j=0;j<n;j++)
              {
                  if(a==ar[j]) {b=true; break;}
                  else cnt++;
              }
              if(b) cout<<a<<" found at "<<cnt<<endl;
           else cout<<a<<" not found"<<endl;
        }
    }
    return 0;
}
