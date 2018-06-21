#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    int ar[605];
    cin>>t;
    while(t--)
    {
        memset(ar,0,sizeof(ar))
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            ar[s[i]]++;
        }


        int ret=0Xffff;
        ret = min(ret, ar['M']/1);
        ret = min(ret, ar['A']/3);
        ret = min(ret, ar['R']/2);
        ret = min(ret, ar['G']/1);
        ret = min(ret, ar['T']/1);
        ret = min(ret, ar['I']/1);n
        printf("%d\n", ret);
    }
    return 0;
}
