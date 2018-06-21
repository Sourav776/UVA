#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool fuck(int a,int b)
{
    vector<int> v;
    int p=0;
    for(int i=1;i<=a;i++)
        v.push_back(i);
    while(v.size()>1)
    {
        v.erase(v.begin()+p);
        int f=v.size();
        cout<<f<<endl;
        p=(p+b-1)%v.size();
    }
    return (v[0]==13);
}
int main()
{
    int n,i=0;
    while(cin>>n && n!=0)
    {
      int r=1;
      while(!fuck(n,r))
        r++;
      cout<<r<<endl;
    }
    return 0;
}
