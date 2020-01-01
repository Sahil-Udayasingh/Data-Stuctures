#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[4],count=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(a[i]==a[j]&&a[i]>0)
            {
                a[j]=-1;
                count++;
            }
        }
    }
    cout<<count;
    
}
