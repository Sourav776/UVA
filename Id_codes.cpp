#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char a[51];
    while(cin>>a)
    {
        if(a[0]=='#') break;
        else
        {
            if(next_permutation(a,a+strlen(a))) cout<<a<<endl;
            else cout<<"No Successor"<<endl;
        }
    }
    return 0;
}
