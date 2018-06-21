#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int ar[105];
    int cnt=0;
    cin>>t;
    while(t--)
    {
        memset(ar,0,sizeof(ar));
        int ma=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>=ma) ma=ar[i];
        }
        cout<<"Case "<<++cnt<<": "<<ma<<endl;
    }
    return 0;
}
