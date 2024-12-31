#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int len=0,i;
    char *s;
    s = (char *)malloc(sizeof(char));
    printf("Enter text : ");
    gets(s);
    for(i=0;*(s+i)!='\0';i++)
    {
        len++;
    }
    printf("length of the string is %d",len);
    return 0;
}