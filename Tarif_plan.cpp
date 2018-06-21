#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[25];
    int mi,ju,ca=0;
    cin>>t;
    while(t--)
    {
        mi=ju=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            int a=(ar[i])/30 + 1;
            int b=ar[i]/60 + 1;
            mi+=a*10;
            ju+=b*15;
        }
        //cout<<mi<<" "<<ju<<endl;

        if(mi==ju) cout<<"Case "<<++ca<<": Mile Juice "<<mi<<endl;
        else if(mi<ju) cout<<"Case "<<++ca<<": Mile "<<mi<<endl;
        else  cout<<"Case "<<++ca<<": Juice "<<ju<<endl;
        memset(ar,0,sizeof(ar));
    }
    return 0;
}
