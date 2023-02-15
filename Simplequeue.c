#include<stdio.h>
#define MAX 5
int Queue[MAX];
int front=-1;
int rear=-1;
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
            display();
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
void push()
{
    char ch;
    do
    {

    if(rear==MAX-1)
    {
        printf("STACK OVERFLOW");
        return;
    }
    rear++;
    printf("Enter the element to be inserted : ");
    scanf("%d",&Queue[rear]);
    if(front==-1)
        front=0;
    printf("Do you want to insert more elements(y/n) : ");
    fflush(stdin);
    scanf("%c",&ch);
    }while((ch=='y')||(ch=='Y'));
}
void pop()
{
    char ch;
    do
    {
        if(rear==-1)
    {
        printf("STACK UNDERFLOW");
        return;
    }
    else
    {
        front++;

    }
    printf("Do you want to delete more elements(y/n) : ");
    fflush(stdin);
    scanf("%c",&ch);
    }while((ch=='y')||(ch=='Y'));

}
void display()
{
    if(rear==-1)
    {
        printf("STACK UNDERFLOW");
        return;
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
            printf("%d\t",Queue[i]);
    }
}
