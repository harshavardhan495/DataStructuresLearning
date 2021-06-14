#include<stdio.h>
#include<conio.h>
#define max_size 100
int a[max_size];
int top=-1;
void Push(int x);
void pop();
int top1();
void Print();
int main()
{
    printf("Implementation of stack data structure");
    Push(1);
    Push(2);
    Push(3);
    printf("\n Top element: %d",top1());
    Print();
    pop();
    Print();
    return 0;
}

void Push(int x)
{
    if(top == max_size-1)
    {
        printf("Stack overflow");
    }
    else
    {
         a[++top] = x;
    }
    return ;
}

void pop()
{
    if(top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
    top--;
    }
}
int top1()
{
    return a[top];
}
void Print()
{
    int k;
    printf("\nStack elements are: ");
    for(k=0;k<=top;k++)
    {
        printf("\t %d",a[k]);
    }
}
