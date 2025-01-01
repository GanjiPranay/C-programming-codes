#include<stdio.h>
int fib(int,int,int);
int main()
{
    int n,i,t1,t2;
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    printf("\nEnter first 2 terms : ");
    scanf("%d%d",&t1,&t2);
    printf("\nFibonacci series is : \n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",fib(t1,t2,i));
    }
    return 0;
}
int fib(int t1,int t2,int n)
{
    if(n==1)
        return t1;
    else if(n==2)
        return t2;
    else 
        return(fib(t1,t2,n-1)+fib(t1,t2,n-2));
}