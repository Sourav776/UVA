#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    long long cost,sum;
    while(cin>>n && n)
    {
        cost=sum=0;
        priority_queue<int> q;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            q.push(-a);
        }
        for(int i=0;i<n-1;i++)
        {
            int d=-q.top();
            q.pop();
            int c=-q.top();
            q.pop();
            cost=d+c;
            sum+=cost;
            q.push(-cost);
        }
        cout<<sum<<endl;
    }
    return 0;
}
