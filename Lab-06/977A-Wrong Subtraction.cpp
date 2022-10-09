
#include<iostream>
using namespace std;
int main()
{
    int n=0,k=0,r,i;
    cin>>n>>k;
    for(i=0;i<k;i++)
    {
        r=n%10;
        if(r==0)
        {
            n/=10;
        }
        else
        {
            n-=1;
        }
    }
     cout<<n<<endl;
    return 0;
}
