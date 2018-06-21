#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;;
    int ar[1005];
    while(cin>>n && n)
    {
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]!=0) a++;
            else b++;
        }
        cout<<"Case "<<++cnt<<": "<<a-b<<endl;
    }
    return 0;
}
