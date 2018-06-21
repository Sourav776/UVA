#include<bits/stdc++.h>
using namespace std;

int sound(char c)
{
    switch(c)
    {
        case 'B': case 'F': case 'P': case 'V':
             return 1;
        case 'C': case 'G': case 'J': case 'K': case 'Q': case 'S': case 'X': case 'Z':
            return 2;
        case 'D': case 'T':
            return 3;
        case 'L':
            return 4;
        case 'M': case 'N':
            return 5;
        case 'R':
            return 6;
    }
    return -1;
}

int main()
{
    char s[105];
    int a;

    while(scanf("%s",s)==1)
    {
        int l=strlen(s);
        a=-1;
        for(int i=0;i<l;i++)
        {
                if(sound(s[i])!=a && (a=sound(s[i]))>0) cout<<a;
        }
        cout<<endl;
    }
    return 0;
}
