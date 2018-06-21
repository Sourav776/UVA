#include<bits/stdc++.h>
using namespace std;
int main()
{

    int type[128],num(1);
    for(int i='a';i<='z';++i,++num)
    {
        type[i]=num;
        //cout<<(char) i<<type[i]<<" ";
        if(num>2 && i!='r' && i!='y') num=0;
    }
    type[' '] = 1;
    int t,ca=0;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        int sum=0;
        getline(cin,s);
        for (int i=0;i<s.length();i++)
        {
            sum+=type[s[i]];
        }
        cout<<"Case #"<<++ca<<": "<<sum<<endl;
    }
}
