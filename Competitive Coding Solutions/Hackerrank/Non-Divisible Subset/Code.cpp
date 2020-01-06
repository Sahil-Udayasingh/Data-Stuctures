#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long long a[n],f[k]={0};

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        f[a[i]%k]++;
    }

    if(k%2==0)
    {
        if(f[k/2]!=0)
        {
            f[k/2]=1;
        }
    }

    // for(int i=0;i<k;i++)
    // cout<<f[i];

    long long ans=1;
    if(f[0]==0)
    {
        ans=0;
    }
    for(int i=1;i<=k/2;i++)
    {
        ans=ans+max(f[i],f[k-i]);
    }
     cout<<ans;
}
