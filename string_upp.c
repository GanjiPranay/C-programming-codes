#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i;
    char *s;
    s=(char *)malloc(sizeof(char));
    printf("Enter text : ");
    gets(s);
    for(i=0;*(s+i)!='\0';i++)
    {
        if(*(s+i)>='a' && *(s+i)<='z')
        {
            *(s+i) -= 32;
        }
    }
    printf("\nstring in uppercase : ");
    puts(s);
    return 0;
}