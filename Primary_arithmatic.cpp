#include<bits/stdc++.h>
using namespace std;
int fac(int a)
{
    return a%10;
}
int main()
{
    unsigned int a,b;
    int cnt;
    while(cin>>a>>b)
    {
        int c=0;
        cnt=0;
        if(a==0 && b==0) break;
        while(a || b)
        {
           //cout<<a<<" "<<b<<" "<<c<<endl;
            c=(fac(a)+fac(b)+c)/10;
            a=(a/10);
            b=(b/10);
            cnt+=c;
        }
        if(cnt==0) cout<<"No carry operation."<<endl;
        else if(cnt==1) cout<<cnt<<" carry operation."<<endl;
        else cout<<cnt<<" carry operations."<<endl;
    }
    return 0;
}
