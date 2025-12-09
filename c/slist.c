#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*top=NULL;
void push(int x)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("over flow");
    }
    else{ 
        newnode->data=x;
        newnode->link=top;
        top=newnode;
    }
}
void pop(){
    struct node*temp;
    temp=top;
    if(top==NULL){
        printf("under flow");
    }
    else{
        printf("%d",top->data);
        top=top->link;
        free(temp);
    }
}
void display(){
    struct node*temp;
    temp=top;
    if(top==NULL)
    {
        printf("stack empty");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->link;
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
        case 1: printf("enterthe element");
        scanf("%d",&x);
        push(x);
        break;
        case 2:pop();
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