#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int cnt=0;
        cout<<"[";
        while(b)
        {
            int temp=a%b;
            cout<<a/b;
            if(temp!=0)
            {
               (cnt==0)? cout<<";" : cout<<",";
            }
            else break;

            a=b;
            b=temp;
            cnt++;
        }
        cout<<"]"<<endl;
    }
}
