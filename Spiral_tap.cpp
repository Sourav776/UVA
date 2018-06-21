#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    long long sz,p;
    while(cin>>sz>>p)
    {

        if(sz==0 && p==0) break;
        long long in_x,in_y;
        in_x=sz/2+1;
        in_y=sz/2+1;
        if(p==1)
        {
            cout<<"Line = "<<in_x<<", column = "<<in_y<<"."<<endl;
            continue;
        }
        long long cur_row,cur_col,cur_dec,cur;
        cur_row=in_x;
        cur_col=in_y;
        for(long long i=3;;i+=2)
        {
            cur_row+=1;
            cur_col+=1;
            if(i*i==p)
            {
                cur=i*i;
                cur_dec=i-1;
                break;
            }
            if(p<i*i)
            {
                cur=i*i;
                cur_dec=i-1;
                break;
            }
        }

        int fl;
        fl=0;
        while(cur!=p)
        {
            if(cur-p>cur_dec)
            {
                if(fl==0)
                {
                    cur_row=cur_row-cur_dec;
                    cur=cur-cur_dec;
                    fl=1;
                }
                else if(fl==1)
                {
                    cur_col=cur_col-cur_dec;
                    cur=cur-cur_dec;
                    fl=2;
                }
                else if(fl==2)
                {
                    cur_row=cur_row+cur_dec;
                    cur=cur-cur_dec;
                    fl=3;
                }
                else
                {
                    cur_col=cur_col+cur_dec;
                    cur=cur-cur_dec;
                    fl=0;
                }
            }
            else
            {
                if(fl==0)
                {
                    cur_row=cur_row-(cur-p);
                    cur=cur-(cur-p);
                    fl=1;
                }
                else if(fl==1)
                {
                    cur_col=cur_col-(cur-p);
                    cur=cur-(cur-p);
                    fl=2;
                }
                else if(fl==2)
                {
                    cur_row=cur_row+(cur-p);
                    cur=cur-(cur-p);
                    fl=3;
                }
                else
                {
                    cur_col=cur_col+(cur-p);
                    cur=cur-(cur-p);
                    fl=0;
                }

            }
        }
        cout<<"Line = "<<cur_row<<", column = "<<cur_col<<"."<<endl;

    }
}
