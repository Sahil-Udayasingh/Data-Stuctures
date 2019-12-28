#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        if(k==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<i+1<<" ";
            }
        }
        else
        {
            if(n%2==1||k>n/2||(n/2)%k!=0)
            {
                cout<<"-1";
            }
            else
            {
                int arr[n+1]={0},p;
                for(int i=0;i<n;i++)
                {
                    p=i+1-k;
                    if(p<=0||arr[p]==1)
                    {
                        p=i+1+k;
                    }
                    cout<<p<<" ";
                    arr[p]=1;
                }
            }
        }
        cout<<"\n";
    }
}
