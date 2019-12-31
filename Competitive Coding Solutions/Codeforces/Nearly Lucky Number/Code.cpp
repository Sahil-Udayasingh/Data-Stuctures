#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,i,x,count=0,flag=0,j,y;
    cin>>n;
    for(i=0;;i++)
    {
        if(n==0)
        break;
        x=n%10;
        if(x==4||x==7)
        count++;
        n=n/10;
    }
    if(count<4)
    {
        cout<<"NO";
    }
    else
    {
    for(j=0;;j++)
    {
        if(count==0)
        break;
        y=count%10;
        if(y!=4&&y!=7)
        {
            flag=1;
            break;
        }
        count=count/10;
    }
    if(flag==1)
    cout<<"NO";
    else
    cout<<"YES";
    }
    
}
