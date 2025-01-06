#include<stdio.h>
#define PI 3.1415
int main(void)
{
    int i,n,sign=1;
    double deg,rad,sum=0.0,num;
    long int den,k=1;
    printf("Enter phase angle in degrees : ");
    scanf("%lf",&deg);
    rad = (deg*PI)/180;
    printf("\nEnter no. of terms : ");
    scanf("%d",&n);
    num = 1;
    den = 1;
    for(i=1;i<=n;i++)
    {
        sum += num/den*sign;
        num = num * rad * rad;
        den = den * (k) * (k+1);
        sign *= -1;
        k = k+2;
    }
    printf("Cos(%0.2lf) = %0.2lf",deg,sum);
}