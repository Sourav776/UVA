#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,p;
    while(cin>>n>>p)
    {
        printf("%.0lf\n",pow(p,1/n));
        //cout<<pow(p,1/n)<<endl;
    }
    return 0;
}
