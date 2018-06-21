#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt,ca=0;
    while(cin>>a>>b && a && b)
    {
        cnt=0;
        if(a<0 && b<0) break;
        long long c=a;
        while(c<=b)
        {
            if(c==1){cnt++;break;}
            else if(c%2==1) {cnt++;c=3*c+1;}
            else {cnt++;c=c/2;}
        }
        cout<<"Case "<<++ca<<": A = "<<a<<", limit = "<<b<<", number of terms = "<<cnt<<endl;
    }
    return 0;
}
