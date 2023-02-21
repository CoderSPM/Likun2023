#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int Queue[MAX];
int rear=-1,front=-1;
void push()
{
    int temp;
    if(rear==MAX-1)
    {
        printf("Overflow Condition\nTerminating Operation");
        return;
    }
    printf("Enter the element to be pushed to stack(-1 to stop entering) : ");
    scanf("%d",&temp);
    if(temp==-1)
    {
        printf("Terminating...\n");
        return;
    }
    else
    {
        if(rear==-1)
        {
            rear++;
            front++;
            Queue[rear]=temp;
            push();
        }
        else
        {
            rear++;
            Queue[rear]=temp;
            push();
        }

    }
}
void display()
{
    int f=front;
    if(front==-1)
    {
        printf("End of Queue");
        return;
    }
    else
    {
        while(f<=rear)
        {
            printf("%d\t",Queue[f]);
            f++;
        }
    }

}
void pop()
{
    char y;
    if(rear==-1)
    {
        printf("Underflow Condition\nTerminating Operation");
        return;
    }
    else
    {
        printf("The element deleted is : %d\n",Queue[front]);
        front++;
        if(front==rear+1)
        {
            front=-1;
            rear=-1;
        }
        printf("To delete more elements enter y : ");
        fflush(stdin);
        scanf("%c",&y);
        if(y=='y')
            pop();
        else
            printf("\nTerminating operation\n");
    }

}
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
