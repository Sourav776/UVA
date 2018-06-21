#include<bits/stdc++.h>
using namespace std;
long ways[10000];
void fuck()
{
    int coin[]={1,5,10,25,50};
    ways[0]=1;
    for(int i=0;i<5;i++)
    {
        for(int j=coin[i];j<10000;j++)
        {
            ways[j]+=ways[j-coin[i]];
        }
    }
}
int main()
{
    fuck();
    int n;
    while(cin>>n)
    {
       cout<<ways[n]<<endl;
    }
    return 0;
}
