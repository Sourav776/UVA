#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n<=0) break;
        else if(n==1) printf("0%%\n");
        else printf("%lld%%\n",25*n);
    }
    return 0;
}
