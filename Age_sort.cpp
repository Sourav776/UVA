#include<bits/stdc++.h>
using namespace std;
long int a[2000005];
int main()
{
   long int n,m;
   while(scanf("%ld",&n)!=0)
   {
       m=0;
       for(long int i=1;i<=n;i++)
       {
           cin>>a[i];
       }
       for(long int i=1;i<103;i++)
       {
           for(long int j=1;j<=n;j++)
           {
               if(a[j]==i && m<n-1)
               {
                   cout<<i<<" ";
                   m++;
               }
               else if(a[j]==i && m==n-1)
               {
                   cout<<i<<endl;
                   m++;
               }
               else if(m==n) break;
           }
       }

   }
   return 0;
}
