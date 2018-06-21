#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt;
    while(getline(cin,s))
    {
        cnt=0;
        bool b=true;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            {
                if(b)
                    {
                        cnt++;
                        b=false;
                     }
            }
            else
                {b=true;}
        }
        cout<<cnt<<endl;
    }

    return 0;
}
