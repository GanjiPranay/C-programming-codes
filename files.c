#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("vasavi.txt","w");
if(fp==NULL)
{
printf("un");
 exit(0);
}
printf("enter text:");
ch=getchar();
while(ch!='9')
{
fputc(ch,fp);
ch=getchar();
}
fputc('9',fp);
fclose(fp);
printf("the text is \n");
fp=fopen("vasavi.txt","r");
ch=fgetc(fp);
while(ch!='9')
{
putchar(ch);
ch=fgetc(fp);
}
return 0;
}