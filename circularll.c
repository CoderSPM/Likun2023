#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct Node
{
    int data;
    struct Node *next;
}*head=NULL;
struct Node* createnewnode();
void insertbeg();
void insertend();
void insertspec();
void deletebeg();
void deleteend();
void deletespec();
void display();
int main()
{
    int choice;
    char repeat;
    do
    {
        printf("||||||||||||||MENU DRIVEN PROGRAM||||||||||||||\n");
        printf("PRESS KEY---------------------OPERATIONS\n");
        printf("1-----------------------------Insertbeg\n");
        printf("2-----------------------------Insertend\n");
        printf("3-----------------------------Insertspec\n");
        printf("4-----------------------------Display All Elements;\n");
        printf("5-----------------------------EXIT\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insertbeg();
            break;
        case 2:
            insertend();
            break;
        case 3:
            insertspec();
            break;
        case 4:
            display(head);
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

void insertbeg()
{
    printf("(-1 to stop)\n");
    struct Node *ptr=createnewnode();
    if(head==NULL)
    {
        if(ptr->data==-1)
        {
            printf("\nTerminating...\n");
            free(ptr);
            return;
        }
        else
        {
            head=ptr;
            head->next=head;
            insertbeg();
        }
    }
    else
    {
        if(ptr->data==-1)
        {
            printf("\nTerminating...\n");
            free(ptr);
            return;
        }
        else
        {
            struct Node *temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=head;
            insertbeg();
        }
    }
    return;
}
void insertend()
{
    printf("(-1 to stop)\n");
    struct Node *ptr=createnewnode();
    if(head==NULL)
    {
        if(ptr->data==-1)
        {
            printf("\nTerminating...\n");
            free(ptr);
            return;
        }
        else
        {
            head=ptr;
            head->next=head;
            insertend();
        }
    }
    else
    {
        if(ptr->data==-1)
        {
            printf("\nTerminating...\n");
            free(ptr);
            return;
        }
        else
        {
            printf("2-----------------------------Insertend\n");
            struct Node *temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=head;
            insertend();
        }
    }
    return;
}
int length()
{
    struct Node* temp=head;
    int i=0;
    if(head)
    {
        printf("Yes");
        i=1;
        while(temp->next!=head)
        {
            temp=temp->next;
            i++;
        }
        return i;
    }
    else
        return 0;

}
void insertspec()
{
    int pos;
    printf("(-1 to stop)\n");
    struct Node *ptr=createnewnode();
    printf("Enter the position : ");
    scanf("%d",&pos);
    if(head==NULL&&pos==1)
    {
        if(ptr->data==-1)
        {
            printf("\nTerminating...\n");
            free(ptr);
            return;
        }
        else
        {
            head=ptr;
            head->next=head;
            insertspec();
        }
    }
    else
    {
        printf("Yes1");
        if(ptr->data==-1)
        {
            printf("\nTerminating...\n");
            free(ptr);
            return;
        }
        else
        {
            printf("%d",length());
            if(pos<=length())
            {
                struct Node *temp=head;
                int i=1;
                while(i<pos-1)
                {
                    temp=temp->next;
                    i++;
                }
                ptr->next=temp->next;
                temp->next=ptr;

            }

        }
    }
    return;
}
void deletebeg()
{
    char ch;
    struct Node *ptr;
    do
    {
        if(head==NULL)
        {
            printf("\nEMPTY QUEUE\n");
            return;
        }
        else
        {
            ptr=head;
            while(ptr->next!=head)
            {
                ptr=ptr->next;
            }
            printf("%d is deleted\n",ptr->next->data);
            struct Node*temp=ptr->next;
            ptr->next=temp->next;
            temp->next=NULL;
            head=ptr;
            free(temp);

        }
        printf("Do you want to delete more elements(y/n) : ");
        fflush(stdin);
        scanf("%c",&ch);
    }
    while((ch=='y')||(ch=='Y'));

}
void deleteend()
{
    char ch;
    struct Node *ptr;
    do
    {
        if(head==NULL)
        {
            printf("\nEMPTY QUEUE\n");
            return;
        }
        else
        {
            ptr=head;
            printf("%d is deleted\n",ptr->data);
            head=head->next;
            free(ptr);

        }
        printf("Do you want to delete more elements(y/n) : ");
        fflush(stdin);
        scanf("%c",&ch);
    }
    while((ch=='y')||(ch=='Y'));

}
void display(struct Node *ptr)
{
    if(ptr)
    {
        if(ptr->next==head)
        {
            printf("%d->!!!",ptr->data);
            return;
        }
        printf("%d->",ptr->data);
        display(ptr->next);
        return;
    }
    else
    {
        printf("%!!!");
    }

}
