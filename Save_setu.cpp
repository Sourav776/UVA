#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum=0,k;
    char s[100];
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s[0]=='d')
        {
            cin>>k;
            sum+=k;
        }
        else
            cout<<sum<<endl;
    }
    return 0;
}
