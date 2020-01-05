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
    long long a[5],sum=0,min,max,summin,summax,i;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
        
        if(i==0)
        {
            min=a[i];
            max=a[i];
        }
        else
        {
            if(a[i]<min)
                min=a[i];
            if(a[i]>max)
                max=a[i];
        }
    }
    summin=sum-max;
    summax=sum-min;
    printf("%lld %lld",summin,summax);
}
