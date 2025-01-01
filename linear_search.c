#include<stdio.h>
#include<stdlib.h>
int linear_search(int *,int,int);
int main()
{
    int *a,n,i,key,pos;
    a = (int *)malloc(sizeof(int));
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%d",a+i);
    }
    printf("\nEnter target element : ");
    scanf("%d",&key);
    pos = linear_search(a,n,key);
    printf("\nElement is present at a[%d]",pos);
    return 0;
}
int linear_search(int *a,int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(a+i)==key)
            return i;
    }
    return -1;
}