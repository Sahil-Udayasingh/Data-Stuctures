#include<stdio.h>
#include<conio.h>
#define Qsize 100
void insert(int aa[],int x)
{
                if(rear==qsize-1)
                {
                                 rear=0;
                }
                else
                {
                                 rear++;
                }
                if(front===rear)
                {
                                printf("\n Queue  Is  Full.");
                }
                else
                {
                                aa[reae]=x;
                }
}
void display(int aa[])
{
                 
main()
{
      int a[qsize],n,i,b=1;
      printf("\n Enter  Total  Number  Of  Element:  ");
      scanf("%d",n);
      for(i=0;i<n;i++)
      {
                      if(b<=3)
                      {
                                    if(b==1)
                                    {
                                                 printf("\n Enter  The  %dst  Number:  ",b);
                                                 scanf("%d",&a[i]);
                                    }
                                    else if(b==2)
                                         {
                                                         printf("\n Enter  The  %dnd  Number:  ",b);
                                                         scanf("%d",&a[i]);
                                         }
                                         else
                                         {
                                                         printf("\n Enter  The  %drd  Number:  ",b);
                                                         scanf("%d",&a[i]);
                                         }
                      }
                      else
                      {
                                    printf("\n Enter  The  %dth  Number:  ",b);
                                    scanf("%d",&a[i]);
                      }
                      b++;
      }
      for(i=0;i<n;i++)
      {
                      insert(a,a[i]);
      }
      display(a);
      getch();
}
                      
        
