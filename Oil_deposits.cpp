#include<bits/stdc++.h>
using namespace std;
int n,m,cnt;
char a[105][105];
void traverse(int r,int c)
{
    if(r<0 || r==m || c<0 || c==n) return;
    if(a[r][c]!='@') return;
    if(a[r][c]=='@') a[r][c]='*';
    traverse(r-1,c-1);
    traverse(r-1,c);
    traverse(r-1,c+1);
    traverse(r,c-1);
    traverse(r,c+1);
    traverse(r+1,c-1);
    traverse(r+1,c);
    traverse(r+1,c+1);
}
int main()
{
    while(cin>>m>>n)
    {
        if(m==0) break;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        cnt=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
        {
            if(a[i][j]!='*')
            {
                traverse(i,j);
                cnt++;
            }
        }
      cout<<cnt<<endl;
    }
    return 0;
}
