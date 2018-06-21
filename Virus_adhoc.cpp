#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int a,ar[1001];
    while(!(cin>>a).eof())
    {
        int sum=0;
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+a);
        for(int i=0;i<(a/2);i++)
        {
            sum+=ar[a-1-i]-ar[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
