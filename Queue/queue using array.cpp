#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,size,front=-1,rear=-1,a[9999],d;
        scanf("%d%d",&n,&size);
        char str[10];
        for(int j=0;j<n;j++)
        {
            scanf("%s",str);
            if(str[0]=='e')
            {
                scanf("%d",&d);
                if(front==-1&&rear==-1)
                {
                    front=rear=0;
                }
                if(rear-front>=size)
                {
                    printf("queue overflow\n");
                }
                else
                {
                    rear=rear+1;
                    a[rear]=d;
                }
            }
            else if(str[0]=='d')
            {
                if(front==-1||front>rear-1)
                {
                    printf("queue underflow\n");
                }
                else
                {
                    printf("%d\n",a[front+1]);
                    front=front+1;
                }
            }
            else 
            {
                if(front==-1||front>rear-1)
                {
                    printf("queue underflow\n");
                }
                else
                {
                    printf("%d\n",a[front+1]);
                }
            }
        }
    }
}
