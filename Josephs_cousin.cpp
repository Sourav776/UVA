#include<iostream>
#include<bits/stdc++.h>
using namespace std;
static int prime[3502];
static int k;
int n;
void fuck()
{
    prime[0]=2;
    k=1;
    for(int i=3;i<=32625;i+=2)
    {
        for(int j=0;j<k && i%prime[j]!=0;j++)
            if(j>=k) prime[k++]=i;
    }
}
int main()
{
    fuck();
    while(cin>>n && n)
    {

    }
}
