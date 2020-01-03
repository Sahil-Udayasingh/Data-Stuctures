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
    int n,i,j,count=0,valley=0;
    char s[1000000];
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
            count=count+1;
        else
            count=count-1;
        
        if(count==0&&s[i]=='U')
            valley=valley+1;
        
    }
    printf("%d",valley);
}
