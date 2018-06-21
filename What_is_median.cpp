#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt(0);
    int ar[10005];
    int a;

    while(cin>>a)
    {
        ar[cnt++]=a;
       // cout<<cnt<<" ";
        sort(ar,ar+cnt);
        //if(cnt==1) cout<<ar[cnt]<<endl;
         if(cnt%2==1) cout<<ar[(cnt+1)/2-1]<<endl;
        else cout<<(ar[cnt/2-1]+ar[cnt/2])/2<<endl;
    }
    return 0;
}
