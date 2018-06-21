#include<bits/stdc++.h>
using namespace std;
int a[100005];
int memo[240];

int main()
{
    int t,i,n,x,mx,q;
    cin>>t;
    while(t--)
    {
        memset(memo,-1,sizeof memo);

        cin>>n>>q;
        for(i = 0 ; i <  n ; i++ )cin>>a[i];

        while(q--)
        {
            cin>>x;
            if(memo[x] == -1 ){
                    mx = 0;

                    if(x!=0)
                        for( i = 0 ; i < n ; i++)
                        mx = max( mx , (a[i]&x) );
                        memo[x]=mx;
                        cout<<memo[x]<<endl;
            }
            else cout<<memo[x]<<endl;
        }
    }
    return 0;
}
