#include<bits/stdc++.h>
using namespace std;
void ter(int a)
{
    if(a<3) {cout<<a;}
    else {ter(a/3); cout<<a%3;}
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n<0) break;
        ter(n);
        cout<<endl;
    }
    return 0;
}
