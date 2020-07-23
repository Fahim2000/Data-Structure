#include<stdio.h>
int main()
{
    int a[100],n,i,key,first,last,mid;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements in the array in ascending order  : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search : ");
    scanf("%d",&key);
    first = 0;
    last = n-1;
    while(first<=last)
    {
        mid=(first+last)/2;

        if(key>a[mid])
        {
            first=mid+1;
        }
        else if(key<a[mid])
        {
            last=mid-1;
        }
        else if(key==a[mid])
        {
            printf("%d is found at index %d ",key,mid);
            break;
        }

    }
if(first>last)
{
    printf("Element not found");
}
}
