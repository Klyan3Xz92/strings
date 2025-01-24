#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int len,i;
void removes(char *);
int main()
{
    char p1[100];
    printf("Enter the string\n");
    __fpurge(stdin);
    scanf("%[^\n]s",p1);
    puts(p1);
    removes(p1);
    puts(p1);
}
void removes(char *p)
{
	i=0;
	while(p[i]==32)
	{
		memmove(p+i,p+i+1,strlen(p+i+1)+1);
	}
	i=0;
	while(p[i])
	{
		if(p[i+1]==' ' && p[i]==32)
		{
			memmove(p+i,p+i+1,strlen(p+i+1)+1);
			i--;
		}
		i++;
	}

}
