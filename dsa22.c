//A letter being PUSH and * means POP in the following sequence, give the sequence of value return by the pop operation when this sequence of operation is performed on an initially empty LIFO stack.
//“EAS*Y*QUE***ST***IO*N***”
#include<stdio.h>
char a[]= "EAS*Y*QUE***ST***IO*N***",s[20],b[30];
int top=-1;
int i,j=0;

char pop()
 {
    if(top<0)
       printf("Underflow");
    else{
        b[j]=a[i];
      j++;  
    }
 }

void push(char a)
{
 
    if(top>=24)
        printf("Overflow.");
    else if(a=='*'){
        pop();
    }
    else{
        top++;
        s[top]=a;
    }
}

void main()
{

printf("%s\n",a);

for(i=0;i<24;i++)
    push(a[i]);

for(i=0;i<24;i++)
    printf("%c",b[i]);
}