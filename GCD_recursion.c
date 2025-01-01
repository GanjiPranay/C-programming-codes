#include<stdio.h>
int getGCD(int,int);
int main()
{
    int a,b,GCD;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    GCD = getGCD(a,b);
    printf("\nGCD of %d and %d is %d",a,b,GCD);
    return 0;
}
int getGCD(int a, int b)
{
    int num,den,rem;
    num = (a>b)?a:b;
    den = (a>b)?b:a;
    rem = num%den;
    if(rem==0)
        return den;
    else
        return(getGCD(den,rem));
}