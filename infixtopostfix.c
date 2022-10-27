//WAP to convert Infix Expression to Postfix Expression.
#include<stdio.h>
#include<ctype.h>
char stack[100];
int top=-1;
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    if(top==-1)
        return -1;
    else
       return stack[top--];
}

int priorty(char x)
{
    if(x=='(')
     return 0;
    if(x=='+'||x=='-')
     return 1;
    if(x=='*'||x=='/')
     return 2; 
}
int main()
{
    char exp[20];
    char *e,x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0')
    {
        if(isalnum(*e))
          printf("%c",*e);
        else if(*e=='(')
         push(*e);
        else if(*e==')')
        {
            while((x=pop())!='(')
               printf("%c",x);
        }   
        else{
            while(priorty(stack[top])>=priorty(*e))
            {
                printf("%c",pop());
            }
            push(*e);
        }
        e++;
    }
    while (top!=-1)
    {
        /* code */
        printf("%c",pop());
    }
    
}