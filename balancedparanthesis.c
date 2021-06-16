#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 10
int top = -1;
void push(char x);
void printstack();
void pop();
int isempty();
char expr[] = "{()}";
int stack[max];
int ispair(char x,char y);
int main()
{    
    char temp;
    printf("Checking whether the given expression balanced or not?");
    printf("\nExpression is:");
    for(int k=0;k<4;k++)
    {
        printf("\t %c",expr[k]);
    }
    printf("\nchecking the stack is empty or not :");
    if(isempty())
    {
        printf("\nStack is empty and ready to get load");
    }
    else
    {
        printf("Stack is not empty");
    }
    printf("\n*********************");
    for(int j = 0;j<max;j++)
    {
        temp = expr[j];
        if(temp == '{' || temp == '(' || temp =='[')
        {
            push(expr[j]);
            printf("\ncurrently stack loaded with :");
            printstack();
        }
        else if(temp == '}' || temp == ')' || temp ==']')
        {
            printf(" \nopposite paranthesis:%c",temp);
            printf("\nCurrent top element in stack:%c",stack[top]);
             if (top== -1 || ispair(stack[top],temp) == 0)
              {
                  printf("\nExpression is not balanced");
                  return 0;
              }
              else
              {
                  pop();
              }
              
        }
    }
    return 0;
}

int isempty()
{
    if(top == -1)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}

void push(char x)
{
    if(top == max)
    {
        printf("\n Oops! Stack is full");
    }
    else
    {
        stack[++top] = x;
    }
}
void printstack()
{
    if(top == -1)
    {
        printf("\nstack is empty bro!");
    }
    else{
    int l;
    printf("\nStack elements are:");
    while(l<=top)
    {
        printf("\t%c",stack[l]);
        l++;
    }
    }
   
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        top--;
        printf("\nAfter Popping out:");
        printstack();
    }
}

int ispair(char x,char y)
{
    char opening = x;
    char closing = y;
    if( opening == '{' && closing == '}')
    {
           return 1;
    }
    else if (opening == '(' && closing == ')')
    {
           return 1;
    }
    else if( opening == '[' && closing == ']' )
    {
           return 1;
    }
    else
    {
         return 0;
    }
}