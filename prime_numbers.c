#include<stdio.h>
int main(void)
{
    int m,n,num,den,count=0;
    printf("Enter the range of numbers : ");
    scanf("%d%d",&m,&n);
    printf("\nPrime numbers between %d and %d are : ",m,n);
    for(num=m;num<=n;num++)
    {
        count = 0;
        for(den=2;den<num;den++)
        {
            if(num%den==0)
            {
                count = 1;
                break;
            }
        }
        if(count==0)
            printf("%d\t",num);
    }
    return 0;
}