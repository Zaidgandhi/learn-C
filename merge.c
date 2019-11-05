#include<stdio.h>
#include <stdlib.h>
#define MAX 100
void merge(int arr[],int beg,int mid,int end);
void merge_sort(int arr[],int beg,int mid);
int main() 
{
    int a[MAX];
    int i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
    printf("The sorted array is\t");
    for ( i = 0; i < n; i++)
    {
       printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
void merge(int a[],int beg,int mid,int end)
{
   int i=beg;
   int j=mid+1;
   int index=beg;
   int temp[MAX],k;
   while ((i<=mid) && (j<=end))
   {
       if (a[i] < a[j])
       {
           temp[index]=a[i];
           i++;
       }
       else
       {
           temp[index]=a[j];
           j++;
       }
       index++;
   }
   if (i > mid)
   {
       while (j <= end)
       {
           temp[index]=a[j];
           j++;
           index++;
       }
   }
   else
   {
       while (i<=mid)
       {
           temp[index]=a[i];
           i++;
           index++;
       }
   }
   for ( k = beg; k < index; k++)
   {
       a[k]=temp[k];
   }
   
}
void merge_sort(int a[],int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        merge_sort(a,beg,mid);
        merge_sort(a,mid+1,end);
        merge(a,beg,mid,end);
    }

}