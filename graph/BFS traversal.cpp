#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};

tra(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int v,e,n,m;
        scanf("%d%d",&v,&e);
        struct node *head[v],*curr[v],*queue;
        for(int j=0;j<v;j++)
        {
            head[j]=(struct node*)malloc(sizeof(struct node));
            head[j]->data=j;
            head[j]->next=NULL;
            curr[j]=head[j];
        }
        for(int j=0;j<e;j++)
        {
            scanf("%d%d",&n,&m);
            struct node *temp;
            temp=(struct node*)malloc(sizeof(struct node));
            temp->data=m;
            temp->next=NULL;
            curr[n]->next=temp;
            curr[n]=temp;
        }
        // for(int j=0;j<v;j++)
        // {
        //     tra(head[j]);
        //     printf("\n");
        // }
        for(int j=0;j<v;j++)
        {
            head[j]=head[j]->next;
        }
        int a[v],front=0,rear=0,count=1,p=1,parent[v];
        int color[v],dis[v];
        for(int j=0;j<v;j++)
        {
            color[j]=0;
            dis[j]=-1;
            parent[j]=-1;
        }
        dis[0]=0;
        color[0]=1;
        a[front]=0;
        while(count!=0)
        {
            struct node *temp;
            temp=head[a[front]];
            while(temp!=NULL)
            {
                if(color[temp->data]==0)
                {
                    color[temp->data]=1;
                    dis[temp->data]=dis[a[front]]+1;
                    rear=rear+1;
                    a[rear]=temp->data;
                    parent[temp->data]=a[front];
                    count++;
                }
                temp=temp->next;
            }
            
            // for(int k=front;k<=rear;k++)
            // printf("%d ",a[k]);
            // printf("\n");
            front=front+1;
            count--;
        }
        for(int j=0;j<v;j++)
        {
            int p=j;
            if(parent[j]==-1)
            {
                if(j!=0)
                printf("NIL\n");
                else
                {
                    printf("0\n");
                }
            }
            else
            {
                int arr[9999],y=0;
                printf("0 ");
                while(parent[p]!=-1)
                {
                    // printf("%d ",p);
                    arr[y]=p;
                    y++;
                    p=parent[p];
                }
                for(int s=y-1;s>=0;s--)
                printf("%d ",arr[s]);
                printf("\n");
            }
        }
    }
}
