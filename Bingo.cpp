#include<bits/stdc++.h>
using namespace std;
int ball[1002], mar[1002];

int main()
{
 int n, b, x, i, j;
 bool p;

 while(scanf("%d %d", &n, &b) && (n || b))
 {
  memset(mar, 0, sizeof mar);
  p = true;

  for (i = 0; i < b; ++i)
   scanf("%d", &ball[i]);

  for (i = 0; i < b; ++i)
   for (j = 0; j < b; ++j)
    mar[abs(ball[i] - ball[j])] = 1;

  for (i = 0; i < (n + 1); ++i)
   if(mar[i] == 0)
    p = false;

 if(p) cout<<"Y"<<endl;
 else cout<<"N"<<endl;
 }

 return 0;
}
