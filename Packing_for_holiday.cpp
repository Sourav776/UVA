#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,L,W,H;
    int cnt=0;
    cin>>T;
    while(T--)
    {
        cin>>L>>W>>H;
        if(L<=20 && W<=20 && H<=20) cout<<"Case "<<++cnt<<": "<<"good"<<endl;
        else cout<<"Case "<<++cnt<<": "<<"bad"<<endl;
    }
    return 0;
}
