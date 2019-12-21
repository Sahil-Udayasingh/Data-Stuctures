    #include<iostream>
    using namespace std;
    int main()
    {
        int n,t,l,count;
        string s;
        cin>>n>>t>>s;
        l=s.size();
        for(int i=0;i<t;i++)
        {
            count=0;
            for(int j=0;j<l-1;j++)
            {
                if(s[j]=='B'&&s[j+1]=='G')
                {
                    s[j]='G';
                    s[j+1]='B';
                    j++;
                    count++;
                }
            }
            if(count==0)
            break;
        }
        cout<<s;
    }
