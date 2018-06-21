#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    while(cin>>n && n)
    {
        int i,j;
        int ma[n][n];
        int sum_row[n]={0};
        int sum_col[n]={0};

        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
        {
            cin>>ma[i][j];
        }
       for(i=0;i<n;i++)
         {
          for(int j=0;j<n;j++)
          {sum_row[i]+=ma[i][j];
           sum_col[i]+=ma[j][i];
          }
         }
        int a=0,b=0,c,d;
        for(i=0;i<n;i++)
        {
            if(sum_row[i]%2!=0) {c=i+1,a++;}
            if(sum_col[i]%2!=0) {d=i+1,b++;}
        }
        if(a==0 && b==0) cout<<"OK"<<endl;
        else if(a==1 && b==1) printf("Change bit (%d,%d)\n",c,d);
        else cout<<"Corrupt"<<endl;
    }
    return 0;
}
