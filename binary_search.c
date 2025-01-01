#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int *,int);
int binary_search(int *,int,int);
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
    bubble_sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
    pos = binary_search(a,n,key);
    printf("\nElement is present at a[%d]",pos);
    return 0;
}
int binary_search(int *a,int n,int key)
{
    int mid,l=0,r=n-1;
    while(l<r)
    {
        mid = (l+r)/2;
        if(key == *(a+mid))
            return mid;
        else if(key>*(a+mid))
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
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