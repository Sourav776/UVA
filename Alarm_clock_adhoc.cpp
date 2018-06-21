#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2;
    int h_r,m_r;
    bool ver_h=false,ver_m=false,ver_1=false, ver_2=false;

    while(cin>>h1>>h2>>m1>>m2)
    {
        if(h1==0 && h2==0 && m1==0 && m2==0) return 0;
        if(h1>h2) ver_h=true;
        if(m1>m2) ver_m=true;
        if(h1<h2 && m1<m2) ver_1=true;
        if (h1==h2 && m1!=m2 && m1>m2) ver_2=true;
        h1*=60;
        h2*=60;
        if(ver_h==true) {h_r=(1440-h1)+h2;}
        else h_r=h2-h1;
        if(ver_m==true){m_r=(60-m1)+m2;}
        else m_r=m2-m1;
        if(ver_1==true) {h_r-=60;}
        if(ver_h==true && ver_m==true) {h_r-=60;}
        if(ver_2==true) {h_r+=1380;}
        cout<<(h_r+m_r)<<endl;
        ver_h=false,ver_m=false,ver_1=false, ver_2=false;
    }
    return 0;
}
