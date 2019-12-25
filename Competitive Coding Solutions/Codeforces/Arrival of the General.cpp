#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,max=-1,min=101,mm,mi;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            mm=i;
        }
        if(a[i]<=min)
        {
            min=a[i];
            mi=i;
        }
    }
    int sum=mm+n-mi-1;
    if(mm>mi)
    sum=sum-1;
    cout<<sum;
}
