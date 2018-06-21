#include<bits/stdc++.h>
using namespace std;
int ar[50000];
bool prime(int a)
{
    if(a==1) return false;
    for(int i=2;i<=sqrt(a);i++)
    {
       if(a%i==0) return false;
    }
    return true;
}
int main()
{
    int n;
    while(cin>>n && n)
    {
        int k=0;
        for(int i=1;i<=n;i++)
            if(prime(i))
            ar[k++]=i;
        int c,d;
        bool b=false;
        for(int i=0;i<=k;i++)
        {
            for(int j=k;j>=0;j--)
            {
                if(ar[i]+ar[j]==n) {c=ar[i];d=ar[j];b=true;break;}
            }
        }
        if(b) cout<<n<<" = "<<d<<" + "<<c<<endl;
        else cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}
