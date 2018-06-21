#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[55];
    int ca(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        int low=0,high=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n-1;i++)
            if(ar[i]>ar[i+1]) high++;
            else if(ar[i]<ar[i+1]) low++;
            else continue;
     cout<<"Case "<<++ca<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
