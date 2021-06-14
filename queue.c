#include<stdio.h>
#define max_limit 100
void enqueue(int x);
void dequeue();
void print();
int front1();
int isempty();    
int a[max_limit];
int front= -1;
int rear= -1;
int main()
{
    printf("Queue implementation in Data Structures Learning");
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    print();
    printf("\nFront element is: %d",front1());
    dequeue();
    print();
    printf("\nFront element is: %d",front1());
    return 0;
}

void enqueue(int x)
{
    if(rear == max_limit)
    {
       printf("Queue is full");
    }
    else if(isempty())
    {
        front = rear = 0;
    }
    else
    {
        rear = rear + 1;   
    }
     a[rear] = x; //pushing element into array;
}

void dequeue()
{
    if(isempty())
    {
        printf("Queue is fuckin empty");
    }
    else if(front==rear)
    {
        front = rear = -1;
    }
    else
    {
        front = front + 1;
        printf("\nDequeue is implemented");
    }

}

void print()
{
    int k;
    printf("\nQueue Array elements:");
    for(k=front;k<=rear;k++)
    {
      printf("\t %d",a[k]);
    }
}

int front1()
{
   return a[front];
}

int isempty()
{
    if( (front == -1 ) && (rear == -1 ))
    {
        return 1;
    }
    else
    {
         return 0;
    }
}