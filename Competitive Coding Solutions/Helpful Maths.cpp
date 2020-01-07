#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l,j=0;
    cin>>s;
    l=s.size();
    int a[l];
    for(int i=0;i<l;i=i+2)
    {
        a[j]=s[i]-'0';
        j++;
    }
    sort(a,a+j);
    
    for(int i=0;i<j;i++)
    {
    cout<<a[i];
    if(i<j-1)
    cout<<"+";
    }
    
}
