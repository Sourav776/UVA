#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,ar[50005],p;
    cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        cin>>q;
        while(q--)
        {
            cin>>p;
            int ans=0;
            for(int i=0;i<n;i++)
            {
                if(p>ar[i]) ans=ar[i];
                else break;
            }
            if(ans==0) cout<<"X ";
            else cout<<ans<<" ";
            int ans2=0;
            for(int i=n-1;i>=0;i--)
            {
                if(p<ar[i]) ans2=ar[i];
                else break;
            }
            if(ans2==0) cout<<"X"<<endl;
            else cout<<ans2<<endl;
        }
    return 0;
}
