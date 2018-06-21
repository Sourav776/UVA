#include<bits/stdc++.h>
#define eps 1e-7
using namespace std;

int p,q,r,s,t,u;
double func(double x)
{
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}
double bisect()
{
    double lo=0,hi=1;
    while(lo+eps<hi)
    {
        double x=(lo+hi)/2;
        if(func(lo)*func(x)<=0) hi=x;
        else lo=x;

    }
    return (lo+hi)/2;
}

int main()
{
    while(cin>>p>>q>>r>>s>>t>>u)
    {
      if(func(0)*func(1)>0) cout<<"No solution"<<endl;
      else printf("%.4lf\n",bisect());
    }
    return 0;
}
