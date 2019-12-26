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
        struct node *top=NULL;
        char str[10];
        for(int i=0;i<n;i++)
        {
            scanf("%s",str);
            if(str[1]=='u')
            {
                scanf("%d",&d);
                struct node *temp;
                temp=(struct node*)malloc(sizeof(struct node));
                temp->data=d;
                temp->next=top;
                top=temp;
            }
            else if(str[0]=='p')
            {
                if(top==NULL)
                {
                    printf("stack underflow\n");
                }
                else
                {
                    printf("%d\n",top->data);
                    struct node *temp;
                    temp=(struct node*)malloc(sizeof(struct node));
                    temp=top;
                    top=top->next;
                    temp->next=NULL;
                    free(temp);
                }
            }
            else
            {
                if(top==NULL)
                {
                    printf("stack underflow\n");
                }
                else
                {
                    printf("%d\n",top->data);
                }
            }
        }
    }
}
