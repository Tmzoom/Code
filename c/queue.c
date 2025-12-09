#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int rear=-1,front=-1;
void enqueue(int x)
{
    if(rear==N-1){
        printf("over flow");
    }
    else if(rear==-1&&front==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("under flow");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
}
void display(){
    if(front==-1&&rear==-1)
    {
        printf("queue is empty");
    }
    else{
        for(int i=front;i<rear+1;i++)
        {
            printf("%d",queue[i]);
        }
    }

}
int main()
{
    int ch,x;
    while(1){
    printf("\n1:Insert\n2:Delete\n3:display\n4:exit\n");
    printf("enter the choice");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("enter the element");
        scanf("%d",&x);
        enqueue(x);
        break;
        case 2:dequeue();
        break;
        case 3:display();
        break;
        case 4:printf("exit");
        return 0;
        default:printf("invaild choice");
    }
 }
return 0;
}