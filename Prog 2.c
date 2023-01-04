#include<stdio.h>
#include<stdlib.h>
int isEmpty();
int isFull();
void push();
void pop();
void peep();
void display();
#define MAX 5
int stack[MAX],top=-1;
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
        printf("3-----------------------------Display Topmost element\n");
        printf("4-----------------------------Display All Elements;\n");
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
            peep();
            break;
        case 4:
            display();
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
int isFull()
{
    if(top==MAX-1)
    {
        printf("The Stack is FULL\n");
        return 1;
    }

    return 0;
}
int isEmpty()
{
    if(top==-1)
    {
        printf("!!!\n");
        printf("Stack is Empty\n");
        printf("Terminating...\n");
        return 1;
    }
    return 0;
}
void push()
{
    char ch;
    int temp;
    do
    {
        if(isFull())
            return;
        printf("Enter the element(Enter -1 to stop entering ) : ");
        scanf("%d",&temp);
        if(temp==-1)
        {
            printf("Terminating...\n");
            return;
        }
        top++;
        stack[top]=temp;
    }
    while(1);

}
void pop()
{
    char ch;
    do
    {
        if(isEmpty())
            return;
        printf("Deleting %d...\n",stack[top]);
        top--;
        printf("Do you want to delete more elements(y/n) : ");
        fflush(stdin);
        scanf("%c",&ch);
    }
    while((ch=='y')||(ch=='Y'));
}
void peep()
{
    if(isEmpty())
        return;
    printf("The Top element of the stack is : %d",stack[top]);
}
void display()
{
    if(isEmpty())
        return;
    printf("The Stack is : \n");
    int i=top;
    while(i>=0)
    {
        printf("%d\n",stack[i]);
        i--;
    }
    printf("!!!\n");
}
