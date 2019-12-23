#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n,u=0,l=0;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        n=s[i];
        if(n<92)
        u++;
        else
        l++;
    }
    if(l>=u)
    {
        for(int i=0;i<len;i++)
        {
            n=s[i];
            if(n<92)
            {
                s[i]=s[i]+32;
            }
        }
    }
    else
    {
        for(int i=0;i<len;i++)
        {
            n=s[i];
            if(n>92)
            {
                s[i]=s[i]-32;
            }
        }
    }
    cout<<s;
    
}
