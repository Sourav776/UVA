#include<bits/stdc++.h>
using namespace std;
int main()
{
    float c,f;
    int t,cs=0;
    cin>>t;
    while(t--)
    {
        cin>>c>>f;
        float res=c+(5*f)/9;
        printf("Case %d: %.2f\n",++cs,res);
    }
    return 0;
}
