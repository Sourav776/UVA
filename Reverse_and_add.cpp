#include<bits/stdc++.h>
using namespace std;
long rev(long b)
{
    long n=0;
    while(b)
    {
        n*=10;
        n+=b%10;
        b/=10;
    }
    return n;
}
int main()
{
    int t,cnt;
    long a;
    cin>>t;
    while(t--)
    {
      cnt=0;
      cin>>a;
      long num=rev(a);
      num=num+a;
      while(num!=rev(num))
      {
          cnt++;
          num+=rev(num);
          //cout<<num<<endl;
      }
      cout<<cnt+1<<" "<<num<<endl;
    }
    return 0;
}
