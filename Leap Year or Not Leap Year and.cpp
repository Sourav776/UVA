#include <bits/stdc++.h>
using namespace std;

int rem(string year,int n)
{
    int i,j,y=0;
    for(i=0;i<year.length();i++)
    {
        y=(y*10+(year[i]-'0'))%n;
    }
    return y;
}

int main()
{
    int y,l,h,b,k=0;
    string year;

    while(cin>>year)
    {
        l=0;
        h=0;
        b=0;
        if(k>0)
        {
           cout<<endl;
        }
        k++;

        if((((rem(year,4)==0)&&(rem(year,100)!=0))||(rem(year,400)==0)))
        {
            cout<<"This is leap year."<<endl;
            l=1;

        }
        if(rem(year,15)==0)
        {
            cout<<"This is huluculu festival year."<<endl;
            h=1;

        }
        if(rem(year,55)==0 && l==1)
        {
            cout<<"This is bulukulu festival year."<<endl;
            b=1;
        }

        if(l==0 && h==0 && b==0)
        {
            cout<<"This is an ordinary year."<<endl;
        }



    }
    return 0;

}
