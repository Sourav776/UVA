#include<bits/stdc++.h>
using namespace std;
int fuck(int a,int b)
{
    if(a%b==0) return b;
    else return fuck(b,a%b);
}
int main()
{
    int n;
    int ar[55];
    while(cin>>n && n)
    {
        int cnt(0);
        for(int i=0;i<n;i++)
            cin>>ar[i];
        int t=n*(n-1)/2;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(fuck(ar[i],ar[j])==1) cnt++;
            }
        }
        //cout<<cnt<<endl;
        if(!cnt) cout<<"No estimate for this data set."<<endl;
        else printf("%.6lf\n",sqrt((double) 6*t/cnt));
    }
    return 0;
}
