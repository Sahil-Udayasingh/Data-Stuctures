#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l,a[200]={0},sum=0;
    l=s.size();
    for(int i=0;i<l;i++)
    {
        a[s[i]]=1;
    }
    
    for(int i=97;i<=122;i++)
    {
        sum=sum+a[i];
    }
    if(sum%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    cout<<"IGNORE HIM!";
}
