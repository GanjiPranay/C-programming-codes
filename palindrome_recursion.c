#include<stdio.h>
int rev = 0;
void pal(int);
int main(void)
{
    int n;
    scanf("%d",&n);
    pal(n);
    if(n==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not");
    }
}
void pal(int x)
{
    rev = rev*10 + x%10;
    pal(x/10);
}
