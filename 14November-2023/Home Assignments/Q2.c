# include "stdio.h"
void copy(int *arr1,int *arr2,int i,int n)
{
    if(i==n)
    {
        return;
    }
    arr2[i]=arr1[i];
    copy(arr1,arr2,i+1,n);
}
int main()
{
    int arr1[100],arr2[100],n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    copy(arr1,arr2,0,n);
    printf("The copied array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}