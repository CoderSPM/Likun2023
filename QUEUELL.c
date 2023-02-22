#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct Node
{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;
struct Node* createnewnode();
void enqueue();
void dequeue();
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
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display(front);
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
void enqueue()
{
    struct Node *ptr=createnewnode();
    if(front==NULL)
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
            front=ptr;
            rear=ptr;
            enqueue();
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
            rear->next=ptr;
            rear=ptr;
            enqueue();
        }
    }
    return;
}
void dequeue()
{
    char ch;
    struct Node *ptr;
    do
    {
        if(front==NULL)
    {
        printf("\nEMPTY QUEUE\n");
        return;
    }
    else
    {
        ptr=front;
        front=front->next;
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

