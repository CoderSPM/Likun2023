#include<bits/stdc++.h>
using namespace std;
int partitions(int ar[],int st,int ends)
{
    int pivot=ar[ends];
    int counts=st;
    int i=st;
    int j=ends;
    for(int l=st; l<=ends; l++)
    {
        if(ar[l]<pivot)
            counts++;
    }
    swap(ar[counts],ar[ends]);
    while((i<=counts)&&(j>=counts))
    {
        if(ar[i]>ar[counts])
        {
            if(ar[j]<ar[counts])
            {
                swap(ar[i],ar[j]);
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
    return counts;
}
void quicksorts(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partitions(arr,s,e);
    quicksorts(arr,s,p-1);
    quicksorts(arr,p+1,e);
}
int main()
{
    int a[7]= {8,1,9,3,2,4};
    for(int c=0; c<=5; c++)
    {
        cout<<a[c]<<'\t';
    }
    cout<<'\n';
    quicksorts(a,0,5);
    for(int c=0; c<=5; c++)
    {
        cout<<a[c]<<'\t';
    }
    return 0;
}
