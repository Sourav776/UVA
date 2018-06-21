#include<bits/stdc++.h>
using namespace std;
long long ar[10001];
int cnt=0;
void fuck(long int a)
{
    ar[cnt++]=a%10;
    long int b=a/10;
    if(b>2) {fuck(b);}
    else {ar[cnt++]=b;}

}
int main()
{
    long int n;
    while(cin>>n && n)
    {
        long int dec=0;
        memset(ar,0,sizeof(ar));
        fuck(n);
        for(int i=cnt-1;i>=0;i--)
        {

            dec+=ar[i]*(pow(2,i+1)-1);
            //cout<<ar[i]<<endl;
        }
        cout<<dec<<endl;
        cnt=0;
    }
    return 0;
}
