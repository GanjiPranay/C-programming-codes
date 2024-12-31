#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,i,j;
    char *s;
    char *rs;
    s=(char *)malloc(sizeof(char));
    rs=(char *)malloc(sizeof(char));
    printf("Enter text : ");
    gets(s);
    for(i=0;*(s+i)!='\0';i++);
    i--;
    n = i;
    for(j=0;j<=i;j++)
    {
        *(rs+j)=*(s+n);
        n--;
    }
    *(rs+j)='\0';
    printf("\nReversed string : ");
    puts(rs);
    return 0;
}