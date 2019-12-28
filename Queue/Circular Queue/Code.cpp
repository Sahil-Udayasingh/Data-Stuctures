/*******************************************************
                 CIRCULAR QUEUE
********************************************************/
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#define qsize 15
int front=qsize-1,rear=qsize-1;
void Insert(int q[],int x)
{
	if(rear==qsize-1)
		rear=0;
	else
		rear++;

	if(front==rear)
	{
		printf("queue  is  full");
		exit(0);
	}
	else
	{
		q[rear]=x;
	}
}
void display(int q[])
{
	int i;
	if(front==qsize-1)
		i=0;
	else
		i=front+1;
	while(i<=rear)
	{
		printf("%d\t",q[i]);
		i++;
	}
}
void Delete(int q[])
{
	 if(rear==front)
	 {
		  printf("queue is empty");
		  exit(0);
	 }
	 if(front==qsize-1)
		front=0;
	 else
		front++;
		int y;
		y=q[front];
		printf("deleted element is %d \n",y);
}
main()
{
	int queue[100],j,x;
	for(j=0;j<=10;j++)
	{
	  printf("insert the element ");
	  scanf("%d",&x);
	  Insert(queue,x);
	}
	display(queue);
	getch();
	//Insert(queue,60);
	//display(queue);
	//getch();
	Delete(queue);
	Delete(queue);
   printf("\n");
	display(queue);
	getch();
}
