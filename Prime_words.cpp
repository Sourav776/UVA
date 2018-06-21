#include<bits/stdc++.h>
using namespace std;
bool check(int a)
{
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
    char a[25];
    int sum;
    while(scanf("%s",a)==1)
    {
        sum=0;
        int l=strlen(a);
        for(int i=0;i<l;i++)
        {
            if(a[i]>='a' && a[i]<='z') sum+= a[i]-'a'+1;
            else sum+=a[i]-'A'+27;
        }
        if(check(sum)) cout<<"It is a prime word."<<endl;
        else cout<<"It is not a prime word."<<endl;
    }
    return 0;
}
