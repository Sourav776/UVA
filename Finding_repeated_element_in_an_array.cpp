 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100];
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++) cin>>ar[i];
        for(int i=0;i<n;i++)
        {
            if(ar[abs(ar[i])]>0) ar[abs(ar[i])]=-ar[abs(ar[i])];
            else cout<<abs(ar[i])<<endl;
        }
    }
    return 0;
}
