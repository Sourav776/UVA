#include<bits/stdc++.h>
using namespace std;
bool fuck(char a,char b)
{
if(a=='('&& b== ')') return true;
else if(a=='['&&b == ']') return true;
return false;
}
bool bal(string exp)
{
stack<char> S;
for(int i =0;i<exp.length();i++)
{
if(exp[i] == '(' || exp[i] == '[')
S.push(exp[i]);
else if(exp[i] == ')'|| exp[i] == ']')
{
if(S.empty() || !fuck(S.top(),exp[i]))
return false;
else
S.pop();
}
}
return S.empty() ? true:false;
}

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
       string p;
       getline(cin,p);
      // if(p.empty()) cout<<"Yes"<<endl;
       if(bal(p))
         cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
    }

return 0;
}
