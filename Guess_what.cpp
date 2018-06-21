#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int com(int a,int b)
{
    int c=a-b;
    return c>=0? c:-c ;
}
int main()
{
    int t,m,n;
    int ar[101],a[101];
    cin>>t;
    while(t--)
    {
        cin>>m>>n;

        for(int i=0;i<m;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<m;i++)
        {
            a[i]=com(ar[i],n);
        }
        sort(a,a+m);
        for(int i=1;i<=m;i++)
        {
            //cout<<a[i-1]<<endl;
            if(n+a[0]==ar[i-1] || n-a[0]==ar[i-1]) {cout<<i<<endl;break;}

        }
    }
    return 0;
}
