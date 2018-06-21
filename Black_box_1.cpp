#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n;
    int a[30005];
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(int i=0;i<m;i++) cin>>a[i];
        vector<int> box;
        int u,p=0,q=0;
        for(int i=1;i<=n;i++)
        {
            cin>>u;
            while(p<u)
            {
                vector<int>::iterator it=lower_bound(box.begin(),box.end(),a[p]);
                box.insert(it,a[p++]);
            }
            cout<<box[q++]<<endl;
        }
        if(t) cout<<endl;
    }
    return 0;
}

