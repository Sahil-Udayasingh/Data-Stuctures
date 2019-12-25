#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;double sum=0;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sum=sum/n;
    printf("%0.12f",sum);
}
