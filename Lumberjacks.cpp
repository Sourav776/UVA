#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--)
    {
        int ma=0,mi=100;
        int cnt=0,cn=0;
        int a[10];
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
            if(a[i]>=ma){ma=a[i];++cnt;}
            if(a[i]<=mi){mi=a[i];++cn;}

        }
        if(cnt==10 || cn==10) cout<<"Ordered"<<endl;
        else cout<<"Unordered"<<endl;
    }
    return 0;
}
