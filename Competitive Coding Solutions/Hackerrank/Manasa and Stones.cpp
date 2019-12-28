#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,n,sum;
        
        cin>>n>>a>>b;
        if(b<a)
        {
            int temp;
            temp=a;
            a=b;
            b=temp;
        }
        int arr[999999]={0};

        for(int j=0;j<n;j++)
        {
            sum=(j*b)+((n-1-j)*a);
            if(arr[sum]==0)
            {
                cout<<sum<<" ";
                arr[sum]++;
            }
        }
        cout<<"\n";
    }
}
