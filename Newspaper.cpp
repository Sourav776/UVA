#include<bits/stdc++.h>
using namespace std;
int t,k,m;
pair<char,double> p[105];
string s;
double v;
char a;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>k;
        char a;int v;
        for(int i=0;i<k;i++)
        {
            cin>>a>>v;
            p[i].first=a;
            p[i].second=v;
        }
        long long sum=0;
        cin>>m;
        getchar();
        while(m--)
        {
            getline(cin,s);
            for(int i=0;i<k;i++)
                for(int j=0;j<s.length();j++)
            {
                if(s[j]==p[i].first) sum+=p[i].second;
            }
        }
     printf("%lld.%02lld$\n", sum/100, sum%100);
    }
    return 0;
}
