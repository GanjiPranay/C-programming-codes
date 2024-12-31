#include<stdio.h>
#include<stdlib.h>
char *string_concat(char*,char*);
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
    s1 = string_concat(s1,s2);
    printf("\nAfter concatinating string 1 : ");
    puts(s1);
}
char *string_concat(char *s1, char *s2)
{
    int i,j;
    for(i=0;*(s1+i)!='\0';i++);
    *(s1+i) = ' ';
    i++;
    for(j=0;*(s2+j)!='\0';j++)
    {
        *(s1+i+j)=*(s2+j);
    }
    *(s1+i+j) = '\0';
    return s1;
}