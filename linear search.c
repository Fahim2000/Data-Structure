#include<stdio.h>
int main()
{
    int n,i,data,found=0,a[100];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements in the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search : ");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            printf("Element is found at position %d",i+1);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("Element not found");
    }

}
