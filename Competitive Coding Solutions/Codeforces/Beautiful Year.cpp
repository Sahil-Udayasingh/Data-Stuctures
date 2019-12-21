#include<iostream>
using namespace std;
int main()
{
    int y;
    cin>>y;
    for(int i=1;;i++)
    {
        int a[10]={0},flag=0,x,temp;
        y=y+1;
        temp=y*10;
        for(int j=0;j<4;j++)
        {
            temp=temp/10;
            x=temp%10;
            a[x]++;
            
        }
        for(int j=0;j<=9;j++)
        {
            if(a[j]>1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<y;
            break;
        }
    }
}
