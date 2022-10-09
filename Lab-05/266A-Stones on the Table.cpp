#include<iostream>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++)
       {
            if(s[i]==s[i+1])
          {
            c++;
           }
       }
       cout<<c<<endl;
       return 0;

}
