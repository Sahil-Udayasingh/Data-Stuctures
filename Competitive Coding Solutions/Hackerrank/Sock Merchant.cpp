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
    int n,a[100],i,sum=0;
    int b[101]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
         b[a[i]]++;
    }
    for(i=0;i<=100;i++)
    {
        sum=sum+(b[i]/2);
        
    }
    
        printf("%d",sum);
}
