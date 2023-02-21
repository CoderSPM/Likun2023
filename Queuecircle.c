#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int Queue[MAX];
int front=-1;
int rear=-1;
void push();
void pop();
int no_elements();
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
        printf("4-----------------------------Display No. of elements\n");
        printf("5-----------------------------EXIT\n");
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
            printf("The no. of elements in the queue is : %d\n",no_elements());
            break;
        case 5:
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

    if(((rear==MAX-1)&&(front==0))||(front==rear+1))
    {
        printf("Queue is FULL");
        return;
    }
    else if(rear==MAX-1)
    {
        rear=0;
        printf("Enter the element to be inserted : ");
        scanf("%d",&Queue[rear]);
    }
    else if(front==-1)
    {
        front=0;
        rear=0;
        printf("Enter the element to be inserted : ");
        scanf("%d",&Queue[rear]);
    }
    else
    {
        rear++;
        printf("Enter the element to be inserted : ");
        scanf("%d",&Queue[rear]);
    }
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
        if(front==-1)
    {
        printf("STACK UNDERFLOW");
        return;
    }
    else if(front==rear)
    {
        printf("The element deleted is : %d\n",Queue[front]);
        rear=-1;
        front=-1;

    }
    else
    {
        printf("The element deleted is : %d\n",Queue[front]);
        front++;
    }
    printf("Do you want to delete more elements(y/n) : ");
    fflush(stdin);
    scanf("%c",&ch);
    }while((ch=='y')||(ch=='Y'));

}
void display()
{
    if(front==-1)
    {
        printf("STACK UNDERFLOW");
        return;
    }
    else
    {
        int i;
        for(i=front;i!=rear;i=(i+1)%MAX)
            printf("%d\t",Queue[i]);
        printf("%d\t",Queue[i]);
    }
}
int no_elements()
{
    if(front==-1)
        return 0;
    else if(front==rear)
        return 1;
    else if(rear>front)
        return rear-front+1;
    else
        return MAX-(front-rear-1);
}
