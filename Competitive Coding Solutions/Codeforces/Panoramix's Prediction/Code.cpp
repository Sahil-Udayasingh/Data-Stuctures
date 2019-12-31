#include<iostream>
#include<math.h>
using namespace std;
int prime(int a)
{
    int flag=0;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    return 0;
    else
    return 1;
}
int main()
{
    int n,m,x;
    cin>>n>>m;
    for(int i=n+1;;i++)
    {
        if(prime(i)==1)
        {
            x=i;
            break;
        }
    }
    if(x==m)
    cout<<"YES";
    else
    cout<<"NO";
}
