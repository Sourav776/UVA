#include<bits/stdc++.h>
using namespace std;
int cnt;
int H_D(int a)
{
    int sum=0,c=0;
    while(a>0)
    {
       sum+=(a%10)*pow(16,c);
       c++;
       a/=10;
    }
    return sum;
}
int binary(int a)
{
  if(a<=1)  {cnt++;return cnt;}
  if(a%2==1) cnt++;
  binary(a/2);
}
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cnt=0;
        cout<<binary(a)<<" ";
        cnt=0;
        cout<<binary(H_D(a))<<endl;
    }
    return 0;
}
