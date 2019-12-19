#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int top;
int push(int b[],int r)
{
             if(top==99)
             {
                        printf("\n  Stack  Is  Full.");
             }
             else
             {
                        top++;
                        b[top]=r;
             }
}
int pop(int b[])
{
            if(top==-1)
            {
                       printf("\n  Stack  Is  Empty.");
                       return 0;
            }
            else
            {
                       int y;
                       y=b[top];
                       top--;
                       return y;
            }
}
main()
{
      char a[100],c;
      top=-1;
      int b[100],l,i,j,n1,n2,r;
      printf("\n Enter  Any  Expression:  ");
      scanf("%s",a);
      l=strlen(a);
      l--;
      i=l;
      while(i>=0)
      {
                 if(a[i]>=48  || a[i]<=57)
                 {
                              j=a[i]-48;
                              push(b,j);
                 }
                 else
                 {
                              n1=pop(b);
                              n2=pop(b);
                              c=a[i];
                              if(c=='+')
                              {
                                        r=n2+n1;
                              }
                              if(c=='-')
                              {
                                        r=n2-n1;
                              }
                              if(c=='*')
                              {
                                        r=n2*n1;
                              }
                              if(c=='/')
                              {
                                        r=n2/n1;
                              }
                              if(c=='%')
                              {
                                        r=n2%n1;
                              }
                              if(c=='^')
                              {
                                        r=pow(n2,n1);
                              }
                                        
                              
                              push(b,r);
                 }
                 i--;
      }
      printf("\n     Value = %d",pop(b));
      getch();
}  
