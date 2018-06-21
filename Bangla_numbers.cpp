#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void fuck(ll a)
{
    //if(a==0) cout<<a;
    while(a)
        {
            if(a>9999999){fuck(a/10000000);cout<<" kuti";a%=10000000;}
            else if(a>99999){fuck(a/100000);cout<<" lakh";a%=100000;}
            else if(a>999) {fuck(a/1000); cout<<" hajar";a%=1000;}
            else if(a>99) {fuck(a/100);cout<<" shata";a%=100;}
            else {cout<<" "<<a;a=0;}
        }
}
int main()
{
    ll n;
    int cnt=0;
    while (cin>>n){
        printf ("%4d.",++cnt);
        if (n==0) cout<<" 0";
        fuck(n);
        cout<<endl;
    }
    return 0;
}
