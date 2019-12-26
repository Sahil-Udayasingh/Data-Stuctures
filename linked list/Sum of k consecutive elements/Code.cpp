#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
void printlink(struct node *n);
void print(struct node *n,int num,int m);

int main()
{
    int t,n,d,m;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&n,&m);
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
        print(head,n,m);
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
void print(struct node *n,int num,int m)
{
    int max=-99999;
    int count=0,k=0;
    struct node *temp,*current;
    current=(struct node*)malloc(sizeof(struct node));
    struct node *a;
    a=(struct node*)malloc(sizeof(struct node));
    temp=(struct node*)malloc(sizeof(struct node));
    current=n;
    temp=n;
    int number=1;
    while(k!=num-m+1)
    {   
        int sum=0;
        struct node *t;
        t=(struct node*)malloc(sizeof(struct node));
        t=n;
        for(int i=0;i<m;i++)
        {
            sum=sum+temp->data;
            temp=n->next;
            n=n->next;
        }
        
        n=current;
        n=n->next;
        current=n;
        temp=n;
        k++;
        if(sum>max)
        {
            max=sum;
            a=t;
            
        }
        // printf("%d ",max);
    }
    
    for(int l=0;l<m;l++)
    {
        printf("%d ",a->data);
        a=a->next;
    }
     
}



