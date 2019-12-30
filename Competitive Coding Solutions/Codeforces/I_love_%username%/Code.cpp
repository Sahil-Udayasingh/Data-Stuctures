#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[n];
    cin>>a[0];
    int max,min;
    max=a[0];
    min=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<min)
        {
            min=a[i];
            count++;
        }
        if(a[i]>max)
        {
            max=a[i];
            count++;
        }
    }
    cout<<count;
    
}
