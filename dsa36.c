//A letter being PUSH and * means POP in the following sequence, give the sequence of value return by the pop operation when this sequence of operation is performed on an initially empty LIFO stack.
//“EAS*Y*QUE***ST***IO*N***”
#include<stdio.h>
#include<stdlib.h>
char a[50],b[50]
char s[24]="EAS*Y*QUE***ST***IO*N***";
int i=0,j=0;
int top=-1;
void push()
{
    if(top>=24)
        printf("overflow");
    else if(s=="*")
    {
        pop();
    }
    else
      top++;
      a[top]=s;
}
void pop()
{
    if(top<0)
       printf("Underflow");
    else{
        b[j]=s[i];
      j++;  
    }
}
int main()
{
    printf("%s",s);
    while(s[i]!='\0')
    {
        push();
        i++;
    }
   for(int i=0;i<24;i++)
   {
    printf("%c",b[i]);
   }

    
}