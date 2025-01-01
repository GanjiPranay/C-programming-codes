#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int *,int);
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
    bubble_sort(a,n);
    printf("\nElements after arranging : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
    return 0;
}
void bubble_sort(int *a,int n)
{
    int i,j,flag = 0,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
                flag = 1;
            }
        }
        if(flag==0)
            break;
    }
}
