#include<iostream>
using namespace std;
int partition(int ar[],int st,int end)
{
    int mid=(st+end)/2;
    int i=st;
    int j=end;
    ar[mid]=(ar[mid]*ar[end])/(ar[end]=ar[mid]);
    while((i<=mid)&&(j>=mid))
    {
        if(ar[i]>ar[mid])
        {
            if(ar[j]<ar[mid])
            {
                ar[i]=(ar[i]*ar[j])/(ar[j]=ar[i]);
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
    }
    return mid;
}
void quicksorts(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partition(arr,s,e);
    quicksorts(arr,s,p-1);
    quicksorts(arr,p+1,e);
}
int main()
{
    int a[7]={8,0,9,3,1,4,5};
    quicksorts(a,0,6);
    for(int c=0;c<=6;c++)
    {
        cout<<a[c]<<'\t';
    }
    return 0;
}