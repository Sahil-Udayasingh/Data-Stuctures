//You are given a linked list. Find consecutive pairs which have the maximum sum. In case of a tie, the earlier pair is preferred
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
void printlink(struct node *n);
void print(struct node *n);

int main()
{
    int t,n,d;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        struct node *head=NULL;
        struct node *current=NULL;
        
        head=(struct node*)malloc(sizeof(struct node));
        current=(struct node*)malloc(sizeof(struct node));
        
        scanf("%d",&d);
        head->data=d;
        head->next=current;
        current=head;
        for(int j=0;j<n-1;j++)
        {
            struct node *temp=NULL;
            temp=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&d);
            temp->data=d;
            current->next=temp;
            current=current->next;
        }
        printlink(head);
        printf("\n");
        print(head);
        printf("\n");
    }
}
void printlink(struct node *n)
{
    while(n!=NULL)
    {
        printf("%d ",n->data);
        n=n->next;
    }
}
void print(struct node *n)
{
    int sum,max=-99999;
    int a,b;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    while(n->next!=NULL)
    {   
        temp=n->next;
    
        sum=n->data+temp->data;
        if(sum>max)
        {
            max=sum;
            a=n->data;
            b=temp->data;
        }
        n=n->next;
    }
    printf("%d %d",a,b);
}



