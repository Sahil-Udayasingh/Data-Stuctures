#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l;
    l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='-'&&s[i+1]=='-')
        {
            cout<<2;
            i++;
        }
        else if(s[i]=='-'&&s[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else if(s[i]=='.')
        {
            cout<<0;
        }
    }
}
