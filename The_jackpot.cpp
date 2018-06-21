#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ar[10005];
    while(cin>>n && n)
    {
        int sum=0,ma=0;
       for(int i=0;i<n;i++)
       {
           cin>>ar[i];
           sum+=ar[i];
           if(sum<0) sum=0;
           if(sum>ma) ma=sum;
       }
       if(ma>0) cout<<"The maximum winning streak is "<<ma<<"."<<endl;
       else cout<<"Losing streak."<<endl;
    }
    return 0;
}
