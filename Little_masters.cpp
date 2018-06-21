#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x,y,r,t;
    cin>>t;
    while(t--)
    {
       cin>>x>>y>>r;
       double b=sqrt(x*x+y*y);
       printf("%.2lf %.2lf\n",r-b,r+b);
    }
    return 0;
}
