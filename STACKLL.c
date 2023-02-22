#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct Node
{
    int data;
    struct Node *next;
}*top=NULL;
struct Node* createnewnode();
void push();
void pop();
void display();
int main()
{
     int choice;
    char repeat;
    do
    {
        printf("||||||||||||||MENU DRIVEN PROGRAM||||||||||||||\n");
        printf("PRESS KEY---------------------OPERATIONS\n");
        printf("1-----------------------------Insertion\n");
        printf("2-----------------------------Deletion\n");
        printf("3-----------------------------Display All Elements;\n");
        printf("4-----------------------------EXIT\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display(top);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid Choice\n");
        }
        printf("Do you want to perform more operations on the stack(y/n) : ");
        fflush(stdin);
        scanf("%c",&repeat);
    }
    while((repeat=='y')||(repeat=='Y'));

    return 0;
}
struct Node* createnewnode()
{
    struct Node *ptr=(struct Node*)malloc(sizeof(int));
    if(ptr)
    {
         printf("Enter the element : ");
         scanf("%d",&ptr->data);
         ptr->next=NULL;
         return ptr;
    }
    else
    {
        printf("Memory Full");
        return NULL;
    }
}
void push()
{
    struct Node *ptr=createnewnode();
    if(top==NULL)
    {
        printf("(-1 to stop)\n");
        if(ptr->data==-1)
        {
            printf("\nTerminating...\n");
            free(ptr);
            return;
        }
        else
        {
            top=ptr;
            push();
        }
    }
    else
    {
        printf("(Enter -1 to stop)\n : ");
        if(ptr->data==-1)
        {
            printf("\nTerminating...\n");
            free(ptr);
            return;
        }
        else
        {
            ptr->next=top;
            top=ptr;
            push();
        }
    }
    return;
}
void pop()
{
    char ch;
    struct Node *ptr;
    do
    {
        if(top==NULL)
    {
        printf("\nEMPTY LL\n");
        return;
    }
    else
    {
        ptr=top;
        top=top->next;
        free(ptr);

    }
    printf("Do you want to delete more elements(y/n) : ");
    fflush(stdin);
    scanf("%c",&ch);
    }while((ch=='y')||(ch=='Y'));

}
void display(struct Node *ptr)
{
    if(ptr==NULL)
    {
        printf("!!!");
        return;
    }
    printf("%d->",ptr->data);
    display(ptr->next);
    return;
}

