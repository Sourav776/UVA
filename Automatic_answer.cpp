#include<bits/stdc++.h>
using namespace std;
int fuck(int a)
{
    return a>0? a:-a;
}
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int res=(((n*63)+7492)*5)-498;
        cout<<fuck((res%100)/10)<<endl;
    }
}
