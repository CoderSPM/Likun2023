#include<stdio.h>
void display(int[],int);
void selectionsort(int[],int);
void bubblesort(int[],int);
int main()
{
    int arr[10],i,copy[10];
    printf("Enter the 10 elements in the array : \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        copy[i]=arr[i];
    }
    printf("Unsorted array is : \n");
    display(arr,10);
    printf("Performing selection sort...\n");
    selectionsort(copy,10);
    printf("Performing bubble sort...\n");
    selectionsort(arr,10);
    return 0;
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void selectionsort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        temp=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[temp])
                temp=j;
        }
        if(temp!=i)
        {
            int t;
            t=a[temp];
            a[temp]=a[i];
            a[i]=t;
        }
    }
    printf("The sorted array is : \n");
    display(a,n);
}
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=(a[i]+a[j])-(a[j]=a[i]);
            }
        }
    }
    printf("The sorted array is : \n");
    display(a,n);
}
