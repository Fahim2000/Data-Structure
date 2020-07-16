#include<stdio.h>
int main()
{
    int a[10],i,n,pos;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("From which position do you want to delete an element : ");
    scanf("%d",&pos);
    if(pos<0 || pos>n)
    {
        printf("Invalid position");
    }
    else
    {
        for(i=pos-1;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("The resultant element is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    }


}

