#include<bits/stdc++.h>
using namespace std;
bool fuck(char a, char b)
{
    int aa, bb;
	if (a>='A' && a<='Z')
		aa = (a - 'A') * 2;
	else
		aa = (a - 'a') * 2 + 1;
	if (b>='A' && b<='Z')
		bb = (b - 'A') * 2;
	else
		bb = (b - 'a') * 2 + 1;
	return aa < bb;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        sort(a.begin(),a.end(),fuck);
        do
        {
            cout<<a<<endl;
        }while(next_permutation(a.begin(),a.end(),fuck));
    }
    return 0;
}
