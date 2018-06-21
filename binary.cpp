#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
void binary(int a)
{
    int r;

    if (a <= 1)
    {
        cout << a;
        return;
    }
    r = a%2;
    binary(a/2);
    cout << r;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        binary(n);
        cout<<endl;
    }
    return 0;
}
