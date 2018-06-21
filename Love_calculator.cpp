#include<bits/stdc++.h>
using namespace std;
int fuck(int a)
{
    if(a<10) return a;
    else fuck(a/10 + a%10);
}
int cal (char a)
{
    int p=0;
    if(a>=65 && a<=90) p= a-'A'+1;
    if(a>=97 && a<=122) p=a-'a'+1;
    return p;
}

int main()
{
    string a,b;
    while(getline(cin,a))
          {
              getline(cin,b);
              int m=0,n=0;
              for(int i=0;i<a.size();i++)
               {
                   //cout<<cal(a[i])<<endl;
                   m+=cal(a[i]);
               }

              for(int j=0;j<b.size();j++)
                {
                    //cout<<cal(b[j])<<endl;
                    n+=cal(b[j]);
                }
               // cout<<m<<" "<<n<<endl;
                m=fuck(m);
                n=fuck(n);
                if(m>=n) printf("%.2f %%\n",100*(float)n/(float)m);
                else printf("%.2f %%\n",100*(float)m/(float)n);
          }
          return 0;
}
