#include <iostream>
using namespace std;
void merge(int a[], int b[], int merg[], int s, int e)
{
    int mid = (s + e) / 2;
    int i=s;
    int j=mid+1;
    int k;
    for(k=s;(i<=mid)&&(j<=e);)
    {
        if(a[i]<=b[j])
        {
            merg[k]=a[i];
            k++;
            i++;
        }
        else if(a[i]>b[j])
        {
            merg[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        merg[k]=a[i];
        k++;
        i++;
    }
    while(j<=e)
    {
        merg[k]=b[j];
        k++;
        j++;
    }

}
void mergesort(int ar[], int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    int x[100], y[100];
    for (int i = 0; i <= mid; i++)
    {
        x[i] = ar[i];
    }
    for (int j = mid + 1; j <= e; j++)
    {
        y[j] = ar[j];
    }
        mergesort(x, s, mid);
        mergesort(y, mid + 1, e);
        merge(x, y, ar, s, e);
}
int main()
{
    int arr[10] = {1, 9, 5, 8, 7, 6, 4, 2, 3,56};
    mergesort(arr, 0, 9);
    for (int p = 0; p <= 9; p++)
            cout << arr[p] << '\n';

}
