#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int i,j,n;
    char **str,*temp;
    printf("Enter no. of students : ");
    scanf("%d",&n);
    temp = (char *)malloc(sizeof(char));
    str = (char **)calloc(n,sizeof(char*));
    for(i=0;i<n;i++)
    {
        *(str + i) = (char *)malloc(sizeof(char));
    }
    for(i=0;i<n;i++)
    {
        printf("\nEnter name of student %d:",i+1);
        fflush(stdin);
        gets(*(str+i));
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(*(str+i),*(str+j))>0)
            {
                strlwr(*(str+i));
                strlwr(*(str+j));
                strcpy(temp,*(str+i));
                strcpy(*(str+i),*(str+j));
                strcpy(*(str+j),temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        puts(*(str+i));
    }
}
