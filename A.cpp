#include<bits/stdc++.h>
using namespace std;
 int main()
{
   long long int m,n;
   while(cin>>n)
   {
       cin>>m;
       long long k=pow(2,n);
       long long res=m%(k);
       cout<<res<<endl;
   }
   return 0;
}
