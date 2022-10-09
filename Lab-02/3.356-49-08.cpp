// problem name-Team
// problem no-231A
#include<iostream>
using namespace std;


   int main() 
{ 
  int t,m,n,k,count=0;
  cin>>t;
  for(int i=0;i<t;i++)
{
  cin>>m>>n>>k;
if(m+n+k>=2)
  count++;
}
cout<<count<<endl;
return 0;
}    
