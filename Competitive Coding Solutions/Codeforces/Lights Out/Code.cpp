    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int s[3][3],l[3][3]={1};
        for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    l[i][j]=1;
                }
            }
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>s[i][j];
                if(s[i][j]%2!=0)
                {
                    l[i][j]=!l[i][j];
                    if(i==0||i==1)
                    {
                        l[i+1][j]=!l[i+1][j];
                    }
                    if(i==1||i==2)
                    {
                        l[i-1][j]=!l[i-1][j];
                    }
                    if(j==0||j==1)
                    {
                        l[i][j+1]=!l[i][j+1];
                    }
                    if(j==1||j==2)
                    {
                        l[i][j-1]=!l[i][j-1];
                    }
                }
            }
        }
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<l[i][j];
                }
                cout<<"\n";
            }
        
        
        
    }
