#include<bits/stdc++.h>
using namespace std;
struct cantor{
    int numerator;
    int denominator;
    };

cantor fuck[1000];
void re_cantor(int r,int c,int in,int dia)
{
    if(r<0 || c<0 || in>1000) {return;}
    fuck[in].numerator=r+1;
    fuck[in].denominator=c+1;
    ++dia;
    if(r==0)
    {
        if(c%2)
        {
            for(int i=0;i<c+dia;i++)
            {
                ++in;
                r=r+1;
                c=c-1;
                re_cantor(r,c,in,dia);
            }
        }
        else
        {
            ++in;
            c=c+1;
            re_cantor(r,c,in,dia);
        }
    }
    else if(c==0)
    {
        if(r%2)
        {
            ++in;
            r=r+1;
            re_cantor(r,c,in,dia);
        }
        else
        {
            for(int i=0;i<r+dia;i++)
            {
                ++in;
                r=r-1;
                c=c+1;
                re_cantor(r,c,in,dia);
            }

        }
    }
}
int main()
{
    re_cantor(0,0,1,0);
    int n;
    while(cin>>n)
    {
        //cout<<"TERM "<<n<<" IS "<<fuck[n].numerator<<"/"<<fuck[n].denominator<<endl;
        cout<<fuck[n].numerator<<"/"<<fuck[n].denominator<<endl;
    }
    return 0;
}
