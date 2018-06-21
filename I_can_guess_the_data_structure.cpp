#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        stack <int>s;
        queue <int>q;
        priority_queue<int> pq;
        int a,b;
        bool x,y,z;
        x=y=z=true;
        while(n--)
        {
            cin>>a>>b;
            if(a==1)
            {
                if(x) s.push(b);
                if(y) q.push(b);
                if(z) pq.push(b);
            }
            else if(a==2)
            {
               if(x)
               {
                   if(!s.empty()&& s.top()==b) s.pop();
                   else x=false;
               }
               if(y)
               {
                   if(!q.empty() && q.front()==b) q.pop();
                   else y=false;
               }
               if(z)
               {
                   if(!pq.empty() && pq.top()==b) pq.pop();
                   else z=false;
               }
            }
        }
       if(x+y+z>1) cout<<"not sure"<<endl;
       else if(x) cout<<"stack"<<endl;
       else if(y) cout<<"queue"<<endl;
       else if(z) cout<<"priority queue"<<endl;
       else cout<<"impossible"<<endl;
    }
    return 0;
}
