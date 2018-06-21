#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    int res;
    if(a>b)res=a;
    else res=b;
    return res;
}
int main()
{
    int n,ar[130][130],fu;
    int sum[101][101],dp[101];
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>ar[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            sum[i][0]=0;
            for(int j=1;j<=n;j++)
            {
                sum[i][j]=sum[i][j-1] + ar[i][j-1];
            }
        }
      fu=-(1<<30);
      for(int i=0;i<n;i++)
      {
          for(int j=i;j<n;j++)
          {
              dp[0]=0;
              for(int k=0;k<n;k++)
              {
                  dp[k+1]=max(sum[k][j+1]-sum[k][i]+dp[k],sum[k][j+1]-sum[k][i]);
                  fu=max(dp[k+1],fu);
              }
          }
      }
      cout<<fu<<endl;
    }
    return 0;
}
