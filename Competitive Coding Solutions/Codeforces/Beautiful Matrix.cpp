    #include<iostream>
    using namespace std;
    int main()
    {
        int a[5][5],b,c;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    b=i+1;
                    c=j+1;
                }
            }
        }
        b=3-b;
        c=3-c;
        if(b<0)
        {
            b=b*(-1);
        }
        if(c<0)
        {
            c=c*(-1);
        }
        cout<<b+c;
    }
