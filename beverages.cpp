#include<bits/stdc++.h>
using namespace std;
string a;
map <string,int>mm;
map <int,string>nn;
vector<int>take[120];
char arr[120],letter[120];
int ind[120],ans[120];
int main()
{
   int m,n,cnt=0;
   while(cin>>n)
   {
       memset(ind,0,sizeof(ind));
       mm.clear();
       nn.clear();
       for(int i=1;i<=n;i++)
       {
           cin>>arr;
           a=arr;
           mm[a]=i;
           nn[i]=a;
       }
       cin>>m;
       for(int i=0;i<m;i++)
       {
           cin>>arr>>letter;
           take[mm[arr]].push_back(mm[letter]);
           ++ind[mm[letter]];
       }
       for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
       {
           if(!ind[j])
           {
              --ind[j];
              ans[i]=j;
              int x=take[j].size();
              for(int k=0;k<x;k++)
                --ind[take[j][k]];
              take[j].clear();
              break;
           }
       }
       printf("Case #%d: Dilbert should drink beverages in this order:", ++cnt);
        for(int j=1;j<=n;j++)
            cout << " " << nn[ans[j]];
        printf(".\n\n");
   }
   return 0;
}
