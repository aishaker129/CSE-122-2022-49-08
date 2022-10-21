
#include<iostream>
using namespace std;
int main()
{
  int t,i,a=0,d=0;
  cin>>t;
  char ch;
  for(i=0;i<t;i++)
  {
    cin>>ch;
    if(ch=='A')
    {
      a=a+1;
    }
    else{
      d=d+1;
    }
  }
  if(a>d)
  {
  cout<< "Anton" <<endl;
  }
  else if(a<d)
  {
  cout<< "Danik"<<endl;
  }
  else
  {
  cout<< "Friendship" <<endl;
  }
  return 0;
}
