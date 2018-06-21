#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
using namespace std;
bool fin;
bool findex(int a)
{
    int r,s,i=0;
    r=a%10;
    s=a/10;
    if(r!=1)
    {
        fin=false;
        bool fuck= findex(s);
    }
    if(r==1) {fin=true;}
    return fin;
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==-1) return 0;
        string s;
        for(int i=1;i<n;i++)
        {
            cin>>s[i];
        }
        for(int j=1;j<n;j++)
        {
            int my=atoi(s[j]);
            bool suck=findex(my);
            if(suck=true){cout<<j+1;}
        }
        cout<<endl;

    }
    return 0;
}
