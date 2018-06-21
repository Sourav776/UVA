#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
    long long cnt=1,a=1%n;
    while(a)
    {
        a=(10*a+1)%n;
        cnt++;
    }
    cout<<cnt<<endl;
    }
    return 0;
}
