#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[3000];
    while(cin>>n)
    {
        ar[0]=1;
       int m=1;
       int temp=0;
       for(int i=1;i<=n;i++)
       {
           for(int j=0;j<m;j++)
           {
               int x=ar[j]*i+temp;
               ar[j]=x%10;
               temp=x/10;
           }
           while(temp>0)
           {
               ar[m]=temp%10;
               temp=temp/10;
               m++;
           }
       }
       cout<<n<<"!"<<endl;
       for(int i=m-1;i>=0;i--)
        cout<<ar[i];
       cout<<endl;
    }
    return 0;
}
