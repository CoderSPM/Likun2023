#include<stdio.h>
#include<string.h>
#define MAX 100
void push(char);
char pop();
int is_operator(char);
int is_operand(char);
int precedence(char);
int is_empty();
char STACK[MAX];
int top=-1;
int main()
{
    char infix[MAX+5],prefix[MAX+5],ch1,ch;
    int i=0,j=0,len;
    printf("Enter the expression : \n");
    scanf("%s",infix);
    len=strlen(infix);
    strrev(infix);
    infix[len]='(';
    infix[len+1]='\0';
    push(')');
    while(!(is_empty()))
    {
        ch=infix[i];
        if(is_operand(ch))
        {
            prefix[j]=ch;
            j++;
        }
        else if(is_operator(ch))
        {
            while(precedence(STACK[top])>precedence(ch))
            {
                prefix[j]=pop();
                j++;
            }
            push(ch);
        }
        else if(ch==')')
            push(ch);
        else
        {
            while(STACK[top]!=')')
            {
                prefix[j]=pop();
                j++;
            }
            ch1=pop();
        }
        i++;
    }
    strrev(prefix);
    prefix[j]='\0';
    printf("PREFIX exp = %s",prefix);
    return 0;
}
int is_empty()
{
    if(top==-1)
        return 1;
    return 0;
}
void push(char ch)
{
    if(top==MAX-1)
    {
        printf("!!!STACK OVERFLOW!!!");
        return;
    }
    else
    {
        top++;
        STACK[top]=ch;
    }

}
char pop()
{
    if(is_empty())
    {
        printf("!!!STACK UNDERFLOW!!!");
        return '@';
    }
    else
    {
        top--;
        return STACK[top+1];
    }
}
int is_operator(char ch)
{
    if((ch=='^')||(ch=='/')||(ch=='*')||(ch=='+')||(ch=='-'))
        return 1;
    else
        return 0;
}
int is_operand(char ch)
{
    if(((ch<='Z')&&(ch>='A'))||((ch<='z')&&(ch>='a'))||((ch<='9')&&(ch>='0')))
        return 1;
    else
        return 0;
}
int precedence(char ch)
{
    if(ch=='^')
        return 3;
    else if((ch=='*')||(ch=='/')||(ch=='%'))
        return 2;
    else if((ch=='+')||(ch=='-'))
        return 1;
    else
        return 0;
}


