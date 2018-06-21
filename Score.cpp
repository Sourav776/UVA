#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,sc=0;
   int cnt=0;
   string s;
   cin>>t;
   while(t--)
   {
       cin>>s;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='O') {cnt++;sc+=cnt;}
           else cnt=0;
       }

       cout<<sc<<endl;
       sc=0;
       cnt=0;
   }
   return 0;
}
