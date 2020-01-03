#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,m,sum,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>d>>m;

    for(int i=0;i<n-m+1;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum=sum+a[i+j];
        }
        if(sum==d)
        {
            count++;
        }
    }
    cout<<count;
}
