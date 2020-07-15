#include <stdio.h>

int main()
{
    int a[10],i,n,value,pos;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter %d elements \n" , n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to insert : ");
    scanf("%d",&value);
    printf("Enter the position you want to insert : ");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];

    }
    a[pos-1]=value;
    n++;
    printf("The resultant array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }



    return 0;
}
