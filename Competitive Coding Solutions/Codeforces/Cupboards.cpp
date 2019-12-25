#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,answer,a,b;
    cin>>n;
    int l[2]={0},r[2]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        l[a]++;
        r[b]++;
    }
    sort(l,l+2);
    sort(r,r+2);
    answer=n+n-l[1]-r[1];
    cout<<answer;
    
}
