#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,d;
        scanf("%d",&n);
        char str[11];
        struct node *front=NULL,*rear=NULL;
        for(int j=0;j<n;j++)
        {
            scanf("%s",str);
            if(str[0]=='e')
            {
                scanf("%d",&d);
                if(rear==NULL)
                {
                    struct node *temp;
                    temp=(struct node *)malloc(sizeof(struct node));
                    temp->data=d;
                    temp->next=NULL;
                    front=temp;
                    rear=temp;
                }
                else
                {
                    struct node *temp;
                    temp=(struct node *)malloc(sizeof(struct node));
                    temp->data=d;
                    rear->next=temp;
                    temp->next=NULL;
                    rear=temp;
                }
            }
            else if(str[0]=='d')
            {
                if(front==NULL)
                {
                    printf("queue underflow\n");
                }
                else if(front->next==NULL)
                {
                    printf("%d\n",front->data);
                    free(front);
                    front=NULL;
                    rear=NULL;
                }
                else
                {
                    struct node *temp;
                    temp=front;
                    front=front->next;
                    printf("%d\n",temp->data);
                    free(temp);
                }
            }
            else if(str[0]=='f')
            {
                if(front==NULL)
                {
                    printf("queue underflow\n");
                }
                else
                {
                    printf("%d\n",front->data);
                }
            }
        }
    }
}
