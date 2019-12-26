#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,max,index;
    int a[6]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        a[k]++;
    }
    max=a[1];
    index=1;
    for(int i=2;i<6;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }
    }
    cout<<index;
    
}
