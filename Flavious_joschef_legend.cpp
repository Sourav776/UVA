#include<iostream>
#include<stdio.h>
using namespace std;
int beche_jabex(int a, int b)
{
    if(a==0) return 1;
    else{
    int result;
    result=(beche_jabex(a-1,b)+b)%a;
    return result;}
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int cas=0;
        int n,k;
        while(cin>>n>>k)
        {

                int fuck=beche_jabex(n,k); cout<<"Case "<<++cas<<": "<<fuck+1<<endl;}
        }
    return 0;
}
