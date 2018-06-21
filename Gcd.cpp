#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0) return b;
    gcd(b%a,a);
}
int main()
{
    int n;
    while(cin>>n && n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                sum+=gcd(i,j);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
