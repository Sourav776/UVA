#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int l,i,s,c;
    char a[100];
    while(cin>>a)
        {
            s=0;
            l=strlen(a);
         for(i=0;i<l;i++)
        {

    s+=(a[i]-'0')*(pow(2,l-i)-1);
         }
    if(s==0)break;
    cout<<s<<endl;
    }
    return 0;
}
