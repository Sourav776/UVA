#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    string s,t;
    int n,c;
    while(cin>>s>>t)
    {
        n=s.size();
        c=0;
        for(int i=0;i<t.size()&& c<n;i++)
        {
            if(t[i]==s[c]) c++;
        }
        if(n==c) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
