#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll func(ll a)
{
  ll sum=0;
  while(a!=0)
  {
      sum+=45*(a/10);
      for(ll i=a/10*10+1;i<=a;i++)
      {
          sum+=i%10;
      }
      a/=10;
  }
  return sum;
}
int main()
{
    ll p,q;
    while(cin>>p>>q)
    {
        if(p<0 && q<0) break;
        //cout<<func(p-1)<<" "<<func(q)<<endl;
        cout<<func(q)-func(p-1)<<endl;
    }
    return 0;
}
