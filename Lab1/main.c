#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct Stack
{
    int top;
    int data[SIZE];
};
typedef struct Stack STACK;

void push(STACK *s, int item)
{
    if(s->top==SIZE-1)
        printf("Stack overflow");
    else
    {
        s->top = s->top +1;
        s->data[s->top]=item;
    }
}
void pop(STACK *s)
{
    if (s->top == -1)
        printf("Stack underfow");
    else
    {
        printf("\n Element which got pop = %d", s->data[s->top]);
        s->top = s->top-1;
    }
}
void display(STACK s)
{
    int i;
    if(s.top==-1)
        printf("\n Stack is overflow");
    else
        {
            printf("\n Stack contents are");
            for(i=s.top;i>=0;i--)
                printf("%d\n",s.data[i]);
        }
}
int main(){
    int ch, item;
    STACK s;
    s.top = -1;
    for(;;)
    {
        printf("\n 1.Push\n");
        printf("\n 2.Pop\n");
        printf("\n 3.Display\n");
        printf("\n 4.Exit\n");
        scanf("%d", &ch);
        switch(ch){
        case 1:
            printf("\nRead element to be pushed\n");
            scanf("%d",&item);
            push(&s, item);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(s);
            break;
        default: exit(0);

        }
    }
    return 0;
}


































