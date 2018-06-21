#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p;
    int ca;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>p;
        int ans=(k+p)%n;
        if(ans==0) ans=n;
        cout<<"Case "<<++ca<<": "<<ans<<endl;
    }
    return 0;
}
