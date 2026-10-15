#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct queue
{
    int rear, front;
    int data[SIZE];
};
typedef struct queue QUEUE;
void enqueue(QUEUE *q, int item)
{
    if(q-> rear == SIZE-1)
        printf("\n Queue is full");
    else
    {
        q->rear = q->rear + 1;
        q->data[q->rear] = item;
        if (q->front==-1)
            q->front = 0;
    }
}
void dequeue(QUEUE *q)
{
    if(q->front==-1)
        printf("\n Queue is empty");
    else
    {
        printf("\n The element getting deleted %d",q->data[q->front]);
        if(q->front==q->rear)
        {
            q->front=-1;
            q->rear=-1;
        }
        else
            q->front = q->front+1;
    }
}
void display(QUEUE q)
{
    int i;
    if(q.front==-1)
        printf("\nQueue is empty");
    else
    {
        printf("\n Content of queue are\n");
        for(i=q.front;i<=q.rear;i++)
            printf("%d\t",q.data[i]);
    }
}
int main()
{
   QUEUE q;
   q.front=-1;
   q.rear=-1;
   int item,ch;
   for(;;)
   {
       printf("\n1.Insert \n2.Delete\n3.Display\n4.Exit\nRead choice:");
       scanf("%d",&ch);
       switch(ch)
       {
       case 1:
        printf("\n Read elements to be inserted:");
        scanf("%d",&item);
        enqueue(&q,item);
        break;
       case 2:
        dequeue(&q);
        break;
       case 3:
        display(q);
        break;
        default:exit(0);
       }
   }
   return 0;
}

































