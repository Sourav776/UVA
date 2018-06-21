#include<bits/stdc++.h>
using namespace std;
long long ways[30002];
void putul()
{
    int coin[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
    ways[0]=1;
    for(int i=0;i<11;i++)
    {
        for(int j=coin[i];j<30002;j++)
        {
            ways[j]+=ways[j-coin[i]];
        }
    }
}
int main()
{
    putul();
    float n;
    while(scanf("%f", &n) == 1 && n)
        {
        int coin = (n + 0.001) * 100;
        printf("%6.2f%17lld\n", n, ways[coin]);
        }
   return 0;
}
