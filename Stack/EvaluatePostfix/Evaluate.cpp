/*****************************************************
           EVALUATION OF POSTFIX EXPRESSION
******************************************************/           
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define n 100

int top;
void push(int A[],int x)
{
	if(top==(n-1))
		printf("stack is Full");
	else
	{
		top++;
		A[top]=x;
	}
}
int pop(int A[])
{
	if(top==-1)
	{
		printf("stack is empty");
		return(0);
	}
	else
	{
		int y;
		y=A[top];
		top--;
		return(y);
	}
}

main()
{
	char st[100],c;
	int i,j,a,l,b,z;
	top=-1;
	printf("\n\nEnter expression");
	scanf("%s",st);
       //i=atoi(st);
       //i=st[0]+st[1];
	//printf("\t\t%d",st[0]);
	int A[100];
	l=strlen(st);
	i=0;
	//printf("%d",l);
	//getch();
	while(i<l)
	{


		if(st[i]>=48 && st[i]<=57)
		{
			j=st[i]-48;
			push(A,j);
		}
		else
		{
			a=pop(A);
			b=pop(A);
			c=st[i];
			//printf("\na=%d\tb=%d\tc=%c",a,b,c);
         //getch();
			if(c=='+')
				z=a+b;
			if(c=='-')
				z=b-a;
			if(c=='*')
				z=a*b;
			if(c=='/')
				z=b/a;




			push(A,z);
		}
		i++;
	}

	printf("\nvalue= %d",pop(A));
		//j=st[i];
	       //push(j);


	getch();
}
