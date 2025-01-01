#include<stdio.h>
long int fact(int);
int main()
{
    int i,j,k,n;
    long term;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(k=0;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            term = fact(i)/(fact(j)*fact(i-j));
            printf("%ld ",term);
        }
        printf("\n");
    }
}
long int fact(int m)
{
    if(m==0)
        return 1;
    else
        return(m*fact(m-1));
}