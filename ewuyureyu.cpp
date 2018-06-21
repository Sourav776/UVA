#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i=1,j=2*10;
        while(i && j--)
    {
        if(i<=10) {cout<<i<<" ";i++;}
        if(j<10 && j) cout<<j<<" ";
    }
    cout<<endl;
    for(i=1;i<=200;i++){if(i%3==0)cout<<i<<" ";}
}
