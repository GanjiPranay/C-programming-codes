#include<stdio.h>
long int fact(int);
int main()
{
    int n;
    long int f;
    printf("Enter number : ");
    scanf("%d",&n);
    f = fact(n);
    printf("\nFactorial of %d is %ld",n,f);
    return 0;
}
long int fact(int n)
{
    if(n==0)
        return 1;
    else
        return(n*fact(n-1));
}