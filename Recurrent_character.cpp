#include<bits/stdc++.h>
using namespace std;
int ma;
char mostFrequent(string text)
{
    int count=0;
    char maxCharcter;
    for(char q=' ';q<='~';q++)

    {
        count = 0;
        for(int i=0; i<text.length();i++)
        {
            if(text[i]==q)
                count++;
        }

        if(count>ma)
        {
            ma=count;
            maxCharcter=q;
        }
    }

    return maxCharcter;

}
int main()
{
    string s;
    while(getline(cin,s))
    {
        ma=0;
        cout<<ma<<" "<<mostFrequent(s)<<endl;
    }
    return 0;
}
