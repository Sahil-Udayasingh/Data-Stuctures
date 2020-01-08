#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,a,b,max=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        sum=sum+b-a;
        if(sum>max)
        {
            max=sum;
        }
    }
    cout<<max;
    
}
