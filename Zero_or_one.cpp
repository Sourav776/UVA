#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c;
    while(!(cin>>a>>b>>c).eof())
          {
              if(a==b && b==c) cout<<"*"<<endl;
                if(a==b && b!=c) cout<<"C"<<endl;
                if(a==c && c!=b) cout<<"B"<<endl;
                if(b==c && c!=a) cout<<"A"<<endl;
          }
          return 0;
}
