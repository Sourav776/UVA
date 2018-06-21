#include<bits/stdc++.h>
using namespace std;
int cnt;
 void binary_check(int a)
{
    int r,i;
    if(a<=1)
    {
        if(a==1) {cnt++;}
        cout<<a;
        return ;
    }
    r=a%2;
    if(r==1) {cnt++;}
    binary_check(a/2);
    cout<<r;
}
int main()
{
    int n;
    while(cin>>n && n)
    {
        cout<<"The parity of ";
        binary_check(n);
        cout<<" is ";
        cout<<cnt;
        cout<<" (mod 2)."<<endl;
        cnt=0;
    }
}
