#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int alice[100001],betty[100001];
int main()
{
    int a,b,al,be;
    while(cin>>a>>b && (a||b))
    {
        memset(alice,0,sizeof(alice));
        memset(betty,0,sizeof(betty));
        int x,c=0;
        al=0,be=0;
        for(int i=0;i<a;i++)
        {
            cin>>x;
            alice[x]++;
        }
        for(int i=0;i<b;i++)
        {
            cin>>x;
            betty[x]++;
        }
       for (int i = 0; i < 100001; ++i)
   {
   if(alice[i] != 0 && betty[i] == 0)
    al++;
   if(alice[i] == 0 && betty[i] != 0)
    be++;
  }
  if (al>be) cout<<be<<endl;
  else cout<<al<<endl;
    }
    return 0;
}
