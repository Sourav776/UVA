#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n=1000000;
    vector<ll> v;
    for(ll i=1;i<=n;i++) v.push_back(i);
    for(ll i=1;i<=n;i++){
        ll val=i,sum=i;
        while(val) {
            sum+=val%10;
            val/=10;
        }
        if(sum<=n) v[sum-1]=0;
    }
    for(ll i=0;i<v.size();i++) if(v[i]!=0)
              cout<<v[i]<<endl;
    return 0;
}
