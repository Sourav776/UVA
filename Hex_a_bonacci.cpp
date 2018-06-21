#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[10005];
ll a, b, c, d, e, f;
ll fn( ll n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(ar[n]!=-1) return ar[n];
    else
    {
        ar[n]=(fn(n-1)+fn(n-2)+fn(n-3)+fn(n-4)+fn(n-5)+fn(n-6))%10000007;
        return ar[n];
    }
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
            memset(ar,-1,sizeof(ar));
            cin>>a>>b>>c>>d>>e>>f>>n;
            unsigned ll ans=fn(n);
            ans=ans%10000007;
            cout<<"Case "<<++caseno<<": "<<ans<<endl;
    }
    return 0;
}
