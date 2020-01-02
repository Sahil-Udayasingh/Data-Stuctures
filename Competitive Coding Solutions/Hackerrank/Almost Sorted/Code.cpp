#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    vector<int> v1,v2;
    int a[999999]={0};

    for(int i=0;i<n;i++)
    {
        cin>>k;
        a[k]=i+1;
        v1.push_back(k);
        v2.push_back(k);
    }
    sort(v2.begin(),v2.end());
    
    int j=0;
    for(int i=0;i<v2.size();i++)
    {
        if(v2[i]==v1[j])
        {
            v1.erase(v1.begin()+j);
            j--;
        }
        j++;
    }

    if(v1.size()==0)
    {
        cout<<"yes";
    }
    else if(v1.size()==2)
    {
        cout<<"yes\n";
        cout<<"swap "<<a[v1[0]]<<" "<<a[v1[1]];
    }
    else
    {
        int flag=0;
        for(int i=0;i<v1.size()-1;i++)
        {
            if(v1[i+1]>v1[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"no";
        }
        else
        {
            cout<<"yes\n";
            cout<<"reverse "<<a[v1[0]]<<" "<<a[v1[v1.size()-1]];
        }
    }

    
}
