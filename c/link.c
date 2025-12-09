#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node *head=NULL;
void insert_frist(){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&newnode->data);
    newnode->link=head;
    head=newnode;
}
void insert_end(){
    struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    if(head==NULL)
        head=newnode;
    else{
        temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newnode;
    }
}
void delete_front(){
    struct node *temp;
    if(head==NULL)
    printf("list is empty");
else{
    temp=head;
    head=head->link;
    free(temp);
} 
}
void delete_end()
{  
    struct node*temp,*prev;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else{
        temp=head;
        while(temp->link!=NULL)
        {
            prev=temp;
            temp=temp->link;
        }
        prev->link=NULL;
        free(temp);
    }

}
void display(){
    struct node*temp;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else{
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
    
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n 1: Insert at first \n 2:insert at end \n 3:delete form front\n 4:delete from end\n 5:display\n6:exit\n");
        printf("enter the choice\n");
        printf("------------------\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: insert_frist();
            break;
            case 2:insert_end();
            break;
            case 3:  delete_front();
            break;
            case 4: delete_end();
            break;
            case 5:display();
            break;
            case 6: printf("exit");
            return 0;
            default:printf("invalid choice");
        }
    }
    return 0;
}