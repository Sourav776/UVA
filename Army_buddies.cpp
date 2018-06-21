#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,b,l,r;
    int L[100005],R[100005];
    while(cin>>s>>b && s && b)
    {
        for(int i=0;i<=s;i++)
        {
            L[i]=i-1;
            R[i]=i+1;
        }
        while(b--)
        {
            cin>>l>>r;
            if(L[l]<1) cout<<"* ";
            else cout<<L[l]<<" ";
            if(R[r]>s) cout<<"*"<<endl;
            else cout<<R[r]<<endl;

            L[R[r]]=L[l];
            R[L[l]]=R[r];
        }
        cout<<"-"<<endl;
    }
    return 0;
}
