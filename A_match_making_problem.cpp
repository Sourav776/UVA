#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    int ca=0;
    while(cin>>m>>n)
    {
        if(m==0 && n==0) break;
        int a,b;
        priority_queue<int>p;
        for(int i=0;i<m;i++)
        {
            cin>>a;
            p.push(-a);
        }
        for(int j=0;j<n;j++)
        {
            cin>>b;
        }
        cout<<"Case "<<++ca<<": "<<(n>m? 0:m-n);
        if(m-n>0)
        {

            cout<<" "<<-p.top();
        }
        cout<<endl;
    }
    return 0;
}
