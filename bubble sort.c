#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp,d;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements in the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted element is : ");
    for(d=0;d<n;d++)
    {
        printf("%d ",a[d]);
    }
}
