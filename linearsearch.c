#include<stdio.h>
# define size 20
int main(int argc, const char** argv) 
{
    int arr[size];
    int num,i,n,found=0,pos=-1;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements in the array");
    for (size_t i = 0; i < n; i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched");
    scanf("%d",&num);
    for ( i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            found =0;
            pos=i;
            printf("The number %d is found in array at position %d\t",num,i+1);
            break;
        }
    }
    if (found == 0)
    {
        printf("%d number does not exixts in array",num);
    }
    
    return 0;
}