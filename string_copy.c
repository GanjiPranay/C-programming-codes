#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,j;
    char *s1;
    char *s2;
    s1=(char *)malloc(sizeof(char));
    s2=(char *)malloc(sizeof(char));
    printf("Enter string 1 : ");
    gets(s1);
    printf("\nEnter string 2 : ");
    gets(s2);
    for(i=0;*(s2+i)!='\0';i++)
    {
        *(s1+i)=*(s2+i);
    }
    *(s1+i)='\0';
    printf("\nAfter copying String 1 : ");
    puts(s1);
}