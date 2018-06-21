#include<iostream>
#include<stdio.h>
using namespace std;
int Fuck(int a)
{
    return a<0 ? -a : a;
}
int main()
{
    int x1,x2,y1,y2=0,res,tem=0;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;

    while(x1!=0 && y1!=0 && x2!=0 && y2!=0)
    {
        if(x1==x2 && y1==y2)
        {
            printf("0\n");
        }
        else if(x1==x2 || y1==y2)
        {
            printf("1\n");
        }
        else
        {
           res=Fuck(x1-x2);
           tem=Fuck(y1-y2);

        cout<<"the value:"<<res<<endl;
            if (res-tem==0)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;


    }
 return 0;
}
