#include<bits/stdc++.h>
using namespace std;
int abs(int a)
{
    return a>=0 ? a:-a;
}
int main()
{
    int t;
    int s,d;
    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        int a,b;
        b=(s-d)/2;
        a=s-b;
        if(abs(a-b)==d && a+b==s && s>=d)cout<<a<<" "<<b<<endl;
        else
        cout<<"impossible"<<endl;
    }
    return 0;
}
