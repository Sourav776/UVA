#include<bits/stdc++.h>
using namespace std;
int arr[95];

int main()
{
    int t, i, j, k, coun, len, l, ma=0;
    string a;
    cin>>t;
    getchar();
   while(t--)
    {
        getline(cin,a);
        for(j='A'; j<='Z'; j++)
        {
            for(l=0; a[l]!='\0'; l++)
            {
                if(toupper(a[l])==j)
                    arr[j]++;
            }
            if(arr[j]>ma)
                ma = arr[j];
        }
    }
    for(i=ma; i>0; i--)
    {
        for(j='A'; j<='Z'; j++)
        {
            if(arr[j]==i)
                cout<<(char) j<<" "<<i<<endl;
        }
    }
    return 0;
}
