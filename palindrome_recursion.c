#include<stdio.h>
int isPalindrome(int);
int rev_num(int,int);
int main(void)
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(isPalindrome(n))
        printf("\n%d is Palindrome..!!",n);
    else
        printf("\n%d is Not Palindrome..!!",n);
}
int isPalindrome(int num)
{
    if(num<0)
        return 0;
    else 
        return num == rev_num(num,0);
}
int rev_num(int num,int rev)
{
    if(num==0)
        return rev;
    else
        return rev_num(num/10,rev*10 + num%10);
}
