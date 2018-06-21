#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ar[101];
    while(cin>>ar)
    {
    int l=strlen(ar);
    long dec=0;
    for(int i=0;i<l;i++)
    {
        dec+=(pow(2,l-i)-1)*(ar[i]-'0');
    }
    if(dec!=0)cout<<dec<<endl;
    else break;
    }

    return 0;
}
