#include<bits/stdc++.h>
using namespace std;
int t,n,p,h;
int ar[3660];
void calc(int h)
{
    int a=h;
    while(h<=n)
    {
            ar[h]=1;
            h+=a;
    }
}
int main()
{


    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        memset(ar,0,sizeof(ar));
        while(p--)
        {
            cin>>h;
            calc(h);
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(ar[i]==1 && i%7!=6 && i%7!=0) cnt++;
            //cout<<ar[i]<<" ";
        }
        cout<<endl;
        cout<<cnt<<endl;
        cout<<endl;
    }
    return 0;
}
