#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    string s,l;
    cin>>s>>l;
    int n;
    n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]==l[i])
        cout<<"0";
        else
        cout<<"1";
    }
}
