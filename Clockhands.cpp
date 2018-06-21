#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,t;
    while(scanf("%lf:%lf",&h,&m))
    {
        if(h==0 && m==0) break;
        double i=h*30+(m/60)*30;
        double j=m*6;
        t=i-j;
        (t<0)? t*=-1:t=t;
        (t>180)? t=360-t:t=t;
        printf("%.3lf\n",t);
    }
    return 0;
}
