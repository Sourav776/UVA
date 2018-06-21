#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,k;
    int ar[101], f[101];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        for (int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        int current=ar[1];
        int total=0;
        while(current!=k)
        {
            current=ar[current];
            total++;
            if(total>n) break;
        }
        if(total>n) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
