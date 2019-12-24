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
    int n,a[1000],min,max,mn=0,mx=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
            min=a[i];
            max=a[i];
        }
        else
        {
            if(a[i]<min)
            {
                min=a[i];
                mn++;
            }
            if(a[i]>max)
            {
                max=a[i];
                mx++;
            }
        }
    }
    printf("%d %d",mx,mn);
}
