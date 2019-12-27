#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>n>>s;
        int a[100]={0},count=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='_')
            {
                count++;
            }
            else
            {
                a[s[j]]++;
            }
        }

        int flag=0;

        if(count!=0)
        {
            for(int j=0;j<s.size();j++)
            {
                if(a[s[j]]==1)
                {
                    flag=1;
                    break;
                }
            }
        }
        else
        {
            for(int j=0;j<s.size();j++)
            {
                if(j==0)
                {
                    if(s[j+1]!=s[j])
                    {
                        flag=1;
                        break;
                    }
                }
                else if(j==s.size()-1)
                {
                    if(s[j-1]!=s[j])
                    {
                        flag=1;
                        break;
                    }
                }
                else if(s[j+1]!=s[j]&&s[j-1]!=s[j])
                {
                    flag=1;
                    break;
                }
            }
        }

        if(flag==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
