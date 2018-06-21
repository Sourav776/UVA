#include<bits/stdc++.h>
using namespace std;
int cnt;
int ar[1001];
void factor(int a)
{
    cnt=0;
    for(int i=1;i<=a/2;i++)
    {
        for(int j=1;j<=a;j++)
        if(i*j==a)
        {
            ar[cnt++]=i;
        }
    }
}
int main()
{
    int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n)
    {
        if(n==0) {cout<<"END OF OUTPUT"<<endl; break;}
        factor(n);
        cout<<cnt<<endl;
        int sum=0;
        for(int i=0;i<cnt;i++)
        {
            sum+=ar[i];
        }
        if(sum==n) printf("%5d  PERFECT\n",n);
        if(sum<n) printf("%5d  DEFICIENT\n",n);
        if(sum>n) printf("%5d  ABUNDANT\n",n);
    }
    return 0;
}
