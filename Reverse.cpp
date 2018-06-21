#include<bits/stdc++.h>
using namespace std;
char str[100],str2[100];

int main()
{
    while(gets(str))
    {
    int len=strlen(str);
    int ind=0;
    for(int i=len-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            for(int j=ind-1;j>=0;j--) cout<<str2[j];
            cout<<" ";
            ind=0;
        }
        else
        {
            str2[ind++]=str[i];
        }
    }
     for(int j=ind-1;j>=0;j--) cout<<str2[j];

     cout<<endl;
    }
    return 0;
}
