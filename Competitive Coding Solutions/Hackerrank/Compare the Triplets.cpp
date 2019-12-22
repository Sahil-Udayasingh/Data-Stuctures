#include <assert.h>
#include <ctype.h>
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
    int a[3],b[3],c[2]={0},i;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    for(i=0;i<3;i++)
        scanf("%d",&b[i]);
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            c[0]++;
        if(b[i]>a[i])
            c[1]++;
    }
    printf("%d %d",c[0],c[1]);
}
