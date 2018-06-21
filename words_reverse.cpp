h#include<bits/stdc++.h>
using namespace std;
void rev(char beg[], char en[]);
void reverseWords(char s[])
{
  char *word_begin=s;
  char *temp = s;
  while(*temp)
  {
    temp++;
    if (*temp == '\0')
    {
       puts(word_begin);puts(temp-1);
      rev(word_begin,temp-1);
    }
    else if(*temp == ' ')
    {
        puts(word_begin);puts(temp-1); cout<<endl;
      rev(word_begin,temp-1);
      word_begin = temp+1;
    }
  }
  rev(s, temp-1);
}

void rev(char beg[], char en[])
{
  char temp;
  while (beg < en)
  {
    temp = *beg;
    *beg++ = *en;
    *en-- = temp;
  }
}

int main()
{
  char s[10005];
  while(gets(s))
  {
     reverseWords(s);
     puts(s);
  }
  return 0;
}
