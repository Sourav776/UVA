#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,f,c,t;
    cin>>t;
    while(t--)
    {
        cin>>e>>f>>c;
        int r= e+f;
        int s=0;
        while(r>=c)
        {
           s+=r/c;
           r= r/c+ r%c;
        }
        cout<<s<<endl;
    }
    return 0;
}
