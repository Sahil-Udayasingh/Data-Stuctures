#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0,bill,correct;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    correct=(sum-a[k])/2;
    cin>>bill;
    if(bill==correct)
    {
        cout<<"Bon Appetit";
    }
    else
    {
        cout<<bill-correct;
    }
    
}
