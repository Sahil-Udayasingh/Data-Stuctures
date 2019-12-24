#include <bits/stdc++.h>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    
    string Ans="Not yet decided!";
    if( (v1>v2 && x1<x2) || (v1<v2 &&x1>x2) )
    {
       for(unsigned int i=0; i<10000; i++)
       {
          x1=x1+v1;
          x2=x2+v2;
          if(x1==x2)
          {
             Ans="YES";
             return Ans;
          }

       }
       Ans="NO";
       return Ans;
    }
    else
    {
       Ans="NO";
       return Ans;
    }
}
int main()
{
    int x,u,y,v;
    string s;
    scanf("%d%d%d%d",&x,&u,&y,&v);
    s=kangaroo(x,u,y,v);
    cout<<s;
}
