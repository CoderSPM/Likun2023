#include<stdio.h>
int factorial(int);
int main()
{

    int a[5],i;
    printf("Start enetering the integers : \n");
    for(i=0;i<5;)
    {
        int temp;
        scanf("%d",&temp);
        fflush(stdin);
        if((temp<=20)&&(temp>=1))
        {
            a[i]=temp;
            i++;
        }
    }
    printf("Successfully stored 5 integers in the array satisfying required conditions!!!\n");
    printf("The array is : \n");
    for(i=0;i<5;i++)
        printf("%d\n",a[i]);
    for(i=0;i<5;i++)
    {
        printf("The factorial of %d is : %d\n",a[i],factorial(a[i]));
    }
    return 0;
}
int factorial(int n)
{
    if(n==0)
        return 1;
    int smallcase=n*factorial(n-1);
    return smallcase;
}
