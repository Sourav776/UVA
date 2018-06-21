#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(getline(cin,a))
    {
        int l=a.length();
        int b=-1;
        for(int i=0;i<l;i++)
        {
            if(a[i]==' ')
            {
                  for(int j=i-1;j>b;j--)
                     cout<<a[j];
                cout<<" ";
                b=i;
            }

        }
        for(int i=l-1;i>b;i--)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}
