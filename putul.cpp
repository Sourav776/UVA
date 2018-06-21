#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int info;
    node *next;
};
class link
{
    node *first,*last;
public:
    link()
    {
        first=NULL;
        last=NULL;
    }
    void make();
    void dis();
};

void link::make()
{
  node *temp;
  //temp=new node;
  int n;
  cout<<"Enter an element :"<<endl;
  cin>>n;
  temp->info=n;
  temp->next=NULL;
  if(first==NULL)
  {
      first=temp;
      last=first;
  }
  else
  {
      last->next=temp;
      last=temp;
  }
}

void link::dis()
{
    node *temp=first;
    if(temp==NULL) {cout<<"No element"<<endl;}
    while(temp!=NULL)
    {
        cout<<temp->info<<">";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    link l;
    int a;
    while(1)
    {
        cout<<"Enter Your Choice:"<<endl<<"1.make"<<endl<<"2.display"<<endl<<"3.exit"<<endl;
        cin>>a;
        switch(a)
        {
        case 1:
          l.make();
          break;
        case 2:
            l.dis();
            break;
        case 3:
            return 0;
        }
    }
    return 0;
}
