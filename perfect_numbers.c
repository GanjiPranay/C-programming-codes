#include<stdio.h>
int main(void)
{
    int m,n,num,den,sum=0;
    printf("Enter the range of numbers : ");
    scanf("%d%d",&m,&n);
    printf("\nPerfect numbers between %d and %d are : ",m,n);
    for(num=m;num<=n;num++)
    {
        den = 1;
        sum = 0;
        while(num>den)
        {
            if(num%den==0)
                sum = sum + den;
                den++;
        }
        if(num==sum)
            printf("%d\t",num);
    }
    return 0;
}