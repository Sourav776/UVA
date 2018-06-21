#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number,i,temp;
    while(cin>>number && number)
    {

       if(number<0)
       {
         cout<<number<<" = -1 x ";
         number=number*-1;
       }
       else
       {
         cout<<number<<" = ";
       }
       for(i=2;i<=sqrt(number);i++)
       {
         if(number%i==0)
         {
           cout<<i<<" x ";
            number=number/i;
            temp=i;
            i=1;
         }
       }
       cout<<number<<endl;
    }
    return 0;
}
