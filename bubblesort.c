#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    int j;
    int n;
    int temp;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the number of elements");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
    
        for ( j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }

    printf("The sorted array is");
    {
        for ( i = 0; i < n; i++)
        {
            printf("\t%d\t",arr[i]);
        }
        
    }
    return(0);

}
