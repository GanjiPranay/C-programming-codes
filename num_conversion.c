#include<stdio.h>
#include<stdlib.h>
void num_con(int);
int main(void)
{
    int n,*bn,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    num_con(n);
    return 0;  
}
void num_con(int n)
{
    int *bn,i=0,temp=n;
    bn = (int*)malloc(sizeof(int));
    while(n!=0)
    {
        *(bn+i)=n%2;
        n/=2;
        i++;
    }
    printf("\nThe binary equivalent of %d is ",temp);
    for(i--;i>=0;i--)
    {
        printf("%d",*(bn+i));
    }
    return;
}