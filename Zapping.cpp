#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int r1,r2,re;
        if(a==-1 && b==-1) break;
        if(a>=b)
            {r1=a-b; r2=b+100-a;}
        else {r1=b-a;r2=a+100-b;}
        (r1<=r2)? cout<<r1<<endl:cout<<r2<<endl;
    }
    return 0;
}
