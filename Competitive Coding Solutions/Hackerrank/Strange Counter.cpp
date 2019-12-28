#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    float m;
    string s;
    cin>>s;
    n=s.size();
    m=sqrt(n);
    b=ceil(m);
    a=floor(m);
    if(a*b<n)
    {
        a++;
    }
    
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(i+(j*b)>=n)
            break;

            cout<<s[i+(j*b)];
        }
        cout<<" ";
    }
}
