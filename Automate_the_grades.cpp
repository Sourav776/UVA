#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,sum,p;
    int cnt=0;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e>>f>>g;
        if(e<=f && e<=g)
        p=(f+g)/2;
        else if(f<=e && f<=g)
        p=(e+g)/2;
        else if(g<=e && g<=f)
        p=(e+f)/2;

        sum=a+b+c+d+p;
        if(sum>=90) cout<<"Case "<<++cnt<<": A"<<endl;
        else if(sum>=80) cout<<"Case "<<++cnt<<": B"<<endl;
        else if(sum>=70) cout<<"Case "<<++cnt<<": C"<<endl;
        else if(sum>=60) cout<<"Case "<<++cnt<<": D"<<endl;
        else if(sum<60) cout<<"Case "<<++cnt<<": F"<<endl;
    }
    return 0;
}
