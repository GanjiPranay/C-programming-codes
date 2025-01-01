#include<stdio.h>
#include<stdlib.h>
void selection_sort(int *,int);
int main(void)
{
    int *a,n,i;
    a = (int *)malloc(sizeof(int));
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%d",a+i);
    }
    printf("\nElements before arranging : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
    selection_sort(a,n);
    printf("\nElements after arranging : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
    return 0;
}
void selection_sort(int *a,int n)
{
    int i,j,temp,min;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(*(a+j)<*(a+min))
                min = j;
        }
        if(min!=i)
        {
            temp = *(a+i);
            *(a+i) = *(a+min);
            *(a+min) = temp;
        }
    }
    return;
}