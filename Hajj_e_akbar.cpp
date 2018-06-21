#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0;
    while(cin>>s)
    {
        if(s=="Hajj") cout<<"Case "<<++cnt<<": Hajj-e-Akbar"<<endl;
        else if(s=="Umrah") cout<<"Case "<<++cnt<<": Hajj-e-Asghar"<<endl;
        else break;
    }
    return 0;
}
