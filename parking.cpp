#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t,n;
    int a;
    cin>>t;
    while(t--)
    {
        int mi=100,ma=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(mi>a) {mi=a;}
            if(ma<a) {ma=a;}
        }
        cout<<2*(ma-mi)<<endl;
    }
    return 0;
}
