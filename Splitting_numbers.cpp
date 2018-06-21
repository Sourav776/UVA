#include<bits/stdc++.h>
using namespace std;
int a,b,cnt,on;
void bin(int c)
{
    if(c%2==1) on++;
     cnt++;
    if(c==1)
    {
        if(on%2==0){a+=(c%2)==1?pow(2,cnt-1):0;return;}
        else b+=(c%2)==1? pow(2,cnt-1):0; return;
    }
    if(c==0) return;
    if(on%2==0)
    {
        a+=(c%2)==1? pow(2,cnt-1):0;
        bin(c/2);
    }
    else
    {
        b+=(c%2)==1? pow(2,cnt-1):0;
        bin(c/2);
     }


}
int main()
{
    int n;
    while(cin>>n && n)
    {
        a=0,b=0,cnt=0,on=0;
        bin(n);

        cout<<b<<" "<<a<<endl;
    }
    return 0;
}
