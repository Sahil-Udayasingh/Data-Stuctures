#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,s;
        scanf("%d%d",&n,&s);
        int a[s],top=-1;
        for(int j=0;j<n;j++)
        {
            char str[4];
            int num;
            scanf("%s",str);
            if(str[1]=='u')
            {
                scanf("%d",&num);
                if(top>=s-1)
                {
                    printf("stack overflow\n");
                }
                else
                {
                    top=top+1;
                    a[top]=num;
                }
            }
            else if(str[0]=='p')
            {
                if(top<0)
                {
                    printf("stack underflow\n");
                }
                else
                {
                    printf("%d\n",a[top]);
                    top=top-1;
                }
            }
            else
            {
                if(top<0)
                printf("stack underflow\n");
                else
                {
                    printf("%d\n",a[top]);
                }
            }
        }
    }
}
