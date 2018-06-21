#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,num,res;
    int ar[101];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        res=1;
        cin>>num;
        for(int i=0;i<num;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<num;i++)
        {
           if(ar[i+1]>ar[i]) break;
           else {res++;}
        }
        cout<<res<<endl;

    }
    return 0;
}
