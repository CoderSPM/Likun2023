#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct QUEUE
{
    int data;
    int priority;
}Q[MAX];
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
        printf("Queue is FULL");
        return;
    }
    else
    {
        rear++;
        printf("Enter the element to be inserted : ");
        scanf("%d",&Q[rear].data);
        printf("Enter the priority of the element : ");
        scanf("%d",&Q[rear].priority);
    }
    printf("Do you want to insert more elements(y/n) : ");
    fflush(stdin);
    scanf("%c",&ch);
    }while((ch=='y')||(ch=='Y'));
}
int todelete()
{
    int max,i,index;
    max=Q[0].priority;
    index=0;
    for(i=0;i<MAX;i++)
    {
        if(Q[i].priority>max)
        {
            max=Q[i].priority;
            index=i;
        }
    }
    printf("The priority to be deleted is : %d",max);
    return index;
}
void pop()
{
    char ch;
    do
    {
        if(rear==-1)
    {
        printf("UNDERFLOW");
        return;
    }
    else
    {
        int i=todelete();
        printf("The element deleted is : %d\n",Q[i].data);
        while(i<=rear)
        {
            Q[i].data=Q[i+1].data;
            Q[i].priority=Q[i+1].priority;
            i++;
        }
        rear--;
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
        printf("UNDERFLOW");
        return;
    }
    else
    {
        int i;
        for(i=0;i<=rear;i++)
        {
            printf("%d\t",Q[i].data);

        }
        printf("\n");
        for(i=0;i<=rear;i++)
        {
            printf("%d\t",Q[i].priority);

        }
        printf("\n");
    }
}

