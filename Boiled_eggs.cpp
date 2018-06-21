#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,q,ca=0;
    int ar[35];
    cin>>t;
    while(t--)
    {
        int cnt=0,sum=0;
       cin>>n>>p>>q;
       for(int i=0;i<n;i++)
       {
           cin>>ar[i];
           sum+=ar[i];
           if(sum<=q) cnt++;
       }
       cout<<"Case "<<++ca<<": "<<min(p,cnt)<<endl;
    }
    return 0;
}
