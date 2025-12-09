#include<stdio.h>
#include<stdlib.h>
#define N 10
int stack[N];
int top=-1;
void push(int item){
    if(top==N-1)
    {
        printf("over flow");
    }
    else{
         top++;
        stack[top]=item;
    }
}
void pop(){
    int temp;
    if(top==-1)
    {
        printf("under flow");
    }
    else{
        temp=stack[top];
        top--;
        printf("delete element %d",temp);
    }
}
void display(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        for(int i=top;i>=0;i--){
        printf("%d\t",stack[i]);
        }
    }
 }
 int main()
{
    int ch,item;
    while(1){
    printf("\n1:Insert\n2:Delete\n3:display\n4:exit\n");
    printf("enter the choice");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("enterthe element");
        scanf("%d",&item);
        push(item);
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
//.\stack.exe