#include<iostream>
#include<stdio.h>
using namespace std;

int board[9][9],valid[9][9];
int ind;


void set_invalid(int cur_row,int i)
{
    for(int row=cur_row+1;row<8;row++)
    {
        if(valid[row][i]==0) valid[row][i]=cur_row+1;
        int row_diff=row-cur_row;
        if(i-row_diff>=0 && valid[row][i-row_diff]==0)
        valid[row][i-row_diff]=cur_row+1;
        if(i+row_diff<8 && valid[row][i+row_diff]==0)
        valid[row][i+row_diff]=cur_row+1;
    }
}

void set_valid(int cur_row)
{
    for(int row=cur_row+1;row<8;row++)
    {
        for(int col=0;col<8;col++)
        {
            if(valid[row][col]>cur_row) valid[row][col]=0;
        }
    }
}
int mx;
int sol(int cur_row,int sum)
{
    if(cur_row==8)
    {
        if(mx<sum) mx=sum;
        return 0;
    }

    for(int i=0;i<8;i++)
    {
        if(valid[cur_row][i]==0)
        {
            valid[cur_row][i]=cur_row+1;
            set_invalid(cur_row,i);
            sol(cur_row+1,sum+board[cur_row][i]);
            valid[cur_row][i]=0;
            set_valid(cur_row);
        }
    }
    return mx;
}


int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>board[i][j];
            }
        }
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++) valid[i][j]=0;
        }
        mx=0;
        sol(0,0);
        printf("%5d\n",mx);

    }
}
