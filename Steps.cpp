#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int f=0;
        int d=b-a;
        if(d!=0)
        {
            int sos=0;
            int z=2;
            while(sos<d)
            {
                sos+=(z/2);
                f++;
                z++;
            }
        }
        cout<<f<<endl;
    }
    return 0;
}
