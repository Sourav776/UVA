#include<bits/stdc++.h>
using namespace std;
int main()
{
        int sum,n;
        while(cin>>n && n)
        {
            sum=0;
           while(1)
        {
            sum+=n/3;
            n= n/3 + n%3;
            if(n==2){sum++;break;}
            else if(n<2) break;
        }
        cout<<sum<<endl;
        }
    return 0;
}
