#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int len=0,count=0;
char * longword(char *);
int main()
{
    char p1[100],*longs=NULL;
    printf("Enter the string\n");
    __fpurge(stdin);
    scanf("%[^\n]s",p1);
    puts(p1);
    printf("After the string:\n");
    __fpurge(stdin);
    longs=longword(p1);
    puts(longs);
}
char * longword(char *p)
{
	
        static char str[100];	
	char *token=strtok(p," ");
	while(token!=NULL)
	{
		len=strlen(token);
		if(count<len)
		{
			count=len;
			strcpy(str,token);
		}
		token=strtok(NULL," ");
	}
	puts(str);
	return str;
}

