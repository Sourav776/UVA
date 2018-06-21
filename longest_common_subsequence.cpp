#include<bits/stdc++.h>
using namespace std;
int lcs(string a,string b,int m,int n)
{
    int l[m+1][n+1];
    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
    {
        if(i==0 || j==0) l[i][j]=0;
        else if(a[i-1]==b[j-1]) l[i][j]=1+l[i-1][j-1];
        else l[i][j]=max(l[i-1][j],l[i][j-1]);
    }
    return l[m][n];
//    int index = L[m][n];
//
//   char lcs[index+1];
//   lcs[index] = '\0';
//   int i = m, j = n;
//   while (i > 0 && j > 0)
//   {
//      if (X[i-1] == Y[j-1])
//      {
//          lcs[index-1] = X[i-1];
//          i--; j--; index--;
//      }
//      else if (L[i-1][j] > L[i][j-1])
//         i--;
//      else
//         j--;
//   }
//
//   cout << "LCS of " << X << " and " << Y << " is " << lcs;
}

int main()
{
    string a,b;
    while(getline(cin,a))
    {
        getline(cin,b);
        int m=a.length();
        int n=b.length();
        //puts(a);
        cout<<lcs(a,b,m,n)<<endl;
    }
    return 0;
}
