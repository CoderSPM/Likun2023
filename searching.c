#include<stdio.h>
int linearsearch(int[],int,int);
int binarysearch(int[],int,int,int);
int main()
{
    int i,arr[10],copy[10],pos,ele;
    printf("Enter the 10 integers to store in the array : \n");
    for(i=0;i<10;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("Unsorted array is : \n");
     for(i=0;i<10;i++)
     {
         printf("%d\t",arr[i]);
     }
     printf("\nPerforming linear search : ...\n");
     printf("Enter the element to search : ");
     scanf("%d",&ele);
     pos=linearsearch(arr,10,ele);
     printf("The element is at position : %d",pos);
     printf("Enter the sorted array for binary searching : \n");
     for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
     printf("Enter the element to search : ");
     scanf("%d",&ele);
     pos=binarysearch(arr,0,9,ele);
     printf("The element is at position : %d",pos);
    return 0;
}
int linearsearch(int a[],int size,int ele)
{
    if(a[size]==ele)
    {
        return size+1;
    }
    int p=linearsearch(a,size-1,ele);
    return p;
}
int binarysearch(int a[],int beg,int end,int ele)
{
    int mid=(beg+end)/2;
    int p;
    while(beg<=end)
    {
        if(a[mid]==ele)
    {
        return mid+1;
    }
    else if(a[mid]>ele)
    {
        p=binarysearch(a,beg,mid-1,ele);
    }
    else if(a[mid]<ele)
    {
        p=binarysearch(a,mid+1,end,ele);
    }
    }

    return -1;

}

