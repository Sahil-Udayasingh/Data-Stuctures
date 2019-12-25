#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,a[60],i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        temp=a[i];
        if(a[i]<38)
            a[i]=temp;
        else
        {
            if(a[i]%5==3)
                a[i]=a[i]+2;
            if(a[i]%5==4)
                a[i]=a[i]+1;
            if(a[i]>100)
                a[i]=temp;
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
