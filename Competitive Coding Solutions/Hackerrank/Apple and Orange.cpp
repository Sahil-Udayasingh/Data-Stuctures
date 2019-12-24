#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,s,t,m,n,app,adis,count=0,i,countt=0;
    scanf("%d%d%d%d%d%d",&s,&t,&a,&b,&m,&n);
    
    for(i=1;i<=m;i++)
    {
        scanf("%d",&app);
        adis=a+app;
        if(adis>=s&&adis<=t)
            count++;
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&app);
        adis=b+app;
        if(adis>=s&&adis<=t)
            countt++;
    }
    printf("%d\n%d",count,countt);
    
}
