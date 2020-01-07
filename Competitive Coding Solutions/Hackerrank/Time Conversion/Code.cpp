#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,b[2],carry,sum;
    char c[10];
    scanf("%s",c);
    if(c[0]=='1'&&c[1]=='2'&&c[8]=='P')
    {
        for(i=0;i<8;i++)
        {
            printf("%c",c[i]);
        }
    }
    
     else if(c[8]=='P')
    {
        sum=2+(c[1]-'0');
        b[0]=sum%10;
        carry=sum/10;
        b[1]=carry+(c[0]-'0')+1;
         if(b[0]==4&&b[1]==2)
         {
             b[0]=0;
             b[1]=0;
         }
         
        printf("%d%d",b[1],b[0]);
        for(i=2;i<8;i++)
            printf("%c",c[i]);
    }
    else
    {
        if(c[0]=='1'&&c[1]=='2')
        {
            c[0]='0';
            c[1]='0';
        }
        for(i=0;i<8;i++)
        {
            printf("%c",c[i]);
        }
    }
}
