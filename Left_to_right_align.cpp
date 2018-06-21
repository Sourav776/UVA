#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,temp;
    while(getline(cin,s))
    {
        int idx=0;
        bool b=0;
        for(int i=0;i<=s.size()-1;i++)
        {
            if(s[i]==' ' && !b) temp[idx++]=s[i];
            else {cout<<s[i];b=1;}

        }
        if(b==1)
            {
                for(int j=0;j<idx-1;j++) {cout<<temp[j];}
                idx=0;
            }
        cout<<endl;
    }
    return 0;
}
