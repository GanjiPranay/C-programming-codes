#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char *s;
    int v=0,c=0,n=0,sp_c=0,i;
    printf("Enter text : ");
    gets(s);
    for(i=0;*(s+i);i++)
    {
        if(*(s+i)>='a'&&*(s+i)<='z')
        {
            if(*(s+i)=='a'||*(s+i)=='e'||*(s+i)=='i'||*(s+i)=='o'||*(s+i)=='u')
                v++;
            else 
                c++;
        }
        else
            if(*(s+i)>='0'&&*(s+i)<='9')
                n++;
            else 
                sp_c++;
    }
    printf("vowels=%d\nconsonants=%d\nnumbers=%d\nspecial_characters=%d",v,c,n,sp_c);
}