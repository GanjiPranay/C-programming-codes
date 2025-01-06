#include<stdio.h>
int main(void)
{
    int leap,y,m,d;
    printf("Enter today's date : ");
    scanf("%d%d%d",&d,&m,&y);
    leap = ((y%4==0)&&(y%100!=0))||y%400==0;
    if(d==31&&m==12)
    {
        d=1;
        m=1;
        y++;
    }
    else if(d==31&&(m==1||m==3||m==5||m==7||m==8||m==10))
    {
        d=1;
        m++;
    }
    else if(d==30&&(m==4||m==6||m==9||m==11))
    {
        d=1;
        m++;
    }
    else if(d==29&&leap==1&&m==2)
    {
        d=1;
        m++;
    }
    else if(d==28&&leap==0&m==2)
    {
        d=1;
        m++;
    }
    else 
    {
        d++;
    }
    printf("tomorrow's date is %d-%d-%d",d,m,y);
}