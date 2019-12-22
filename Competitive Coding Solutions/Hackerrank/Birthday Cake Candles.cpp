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
    int n,a[100000],b[10000000],i,count=0,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
            max=a[i];
        }
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
            count++;
    }
    printf("%d",count);
}
