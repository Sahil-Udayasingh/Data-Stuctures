#include<iostream>
using namespace std;
int main()
{
    int n,l;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        l=s.size();
        if(l<=10)
        cout<<s<<"\n";
        else
        {
            cout<<s[0]<<l-2<<s[l-1]<<"\n";
        }
    }
}
