#include<stdio.h>
# define size 10
void insertion(int arr[],int n);
int main(int argc, const char** argv) 
{
    int arr[size],i,n;
    printf("Enter the size of arrray");
    scanf("%d",&n);
    printf("\nEnter the elements in arrray");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion(arr,n);
    printf("The sorted elements in arrray are\t");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
void insertion(int arr[],int n)
{
    int i,j,temp;
    for ( i = 0; i < n; i++)
    {
        temp=arr[i];
        j=i-1;
        while (temp<arr[j] && (j>=0))
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    
}