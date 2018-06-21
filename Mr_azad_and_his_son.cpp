#include<bits/stdc++.h>
using namespace std;
bool fuck(long long a)
{
    if(a==1) return 0;
    bool prime=true;
    for(long long i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
            {
                prime=false;
                break;
            }
    }
    return prime;
}
int main()
{
    int n;
    while(cin>>n && n)
    {
        int a=fuck(n);
        int b=fuck((1LL<<n)-1);
       if(a && b){cout<<"Perfect: "<<(1LL<<(n-1))*((1LL<<n)-1)<<"!"<<endl;}
       else if(a && !b) cout<<"Given number is prime. But, NO perfect number is available."<<endl;
       else cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
    }
    return 0;
}
