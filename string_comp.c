#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i = 0;
    char *s1;
    char *s2;
    s1=(char *)malloc(sizeof(char));
    s2=(char *)malloc(sizeof(char));
    printf("Enter string 1 : ");
    gets(s1);
    printf("\nEnter string 2 : ");
    gets(s2);
    while(*(s1+i)!='\0' && *(s2+i)!='\0' && *(s1+i)==*(s2+i))
    {
        i++;
    }
    if(*(s1+i)=='\0' && *(s2+i)=='\0')
        printf("\nBoth the strings are same...");
    else 
        printf("\nBoth the strings are Not same...");
}
