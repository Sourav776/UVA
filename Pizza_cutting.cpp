#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n>=0)
    {
        long long sum=1;
        for(int i=0;i<n;i++)
        {
            sum+=i+1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
