#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,len;
    char suck[1000];
    while(cin>>suck)
        {
    len=strlen(suck);
    for(i=0;i<len;i++)
    {
        printf("%c",suck[i]-7);

    }
    cout<<endl;
        }
        return 0;
}
