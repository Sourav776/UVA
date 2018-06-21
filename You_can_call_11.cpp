#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1001];
    while(cin>>a)
    {
        if(strlen(a)==1 && a[0]=='0') return 0;
        int sum=0;
        for(int i=0;i<strlen(a);i++)
        {
            if(i%2==0) sum+=a[i]-'0';
            else sum -=a[i]-'0';
        }
        cout<<sum<<endl;
        if(sum%11==0) cout<<a<<" is a multiple of 11."<<endl;
        else cout<<a<<" is not a multiple of 11."<<endl;
    }
    return 0;
}
