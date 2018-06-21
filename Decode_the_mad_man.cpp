#include<bits/stdc++.h>
using namespace std;
int main()
{

   char key[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
   int len=strlen(key);
   string s;
   while(getline(cin,s))
   {
       for(int i=0;i<s.length();i++)
       {
           if(s[i]==' ') cout<<" ";
           else
           {
               char c=tolower(s[i]);
               for(int j=0;j<len;j++)
               {
                   if(c==key[j]) {cout<<key[j-2];break;}
               }
           }
       }
       cout<<endl;
   }
   return 0;
}
