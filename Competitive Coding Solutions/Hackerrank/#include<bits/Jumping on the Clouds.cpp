#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,count=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    v.push_back(1);

    while(k!=n-1)
    {
        if(v[k+2]==0)
        {
            k=k+2;
        }
        else
        {
            k=k+1;
        }
        count++;
    }
    cout<<count;
}
