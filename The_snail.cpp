#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f;
    int cnt;
    while(cin>>h>>u>>d>>f && h)
    {
        cnt=0;
        f=u*f/100;
        double s=0;
        //printf("%.2lf\n",k);
        while(1)
        {
            cnt++;
            if(u>0) s+=u;
            u-=f;
            if(s>h) break;
            s-=d;
            if(s<0) break;
        }
       if(s>=0) cout<<"success on day "<<cnt<<endl;
       else cout<<"failure on day "<<cnt<<endl;
    }
    true;
}
