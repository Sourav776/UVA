#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    float sum;
    float ar[1001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        int cnt =0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        float ave =sum/n;
        for(int i=0;i<n;i++)
        {
            if(ar[i]>ave) cnt++;
        }
        float r=((float)cnt/(float)n)*100;
        printf("%.3f%%\n",r);
    }
    return 0;
}
