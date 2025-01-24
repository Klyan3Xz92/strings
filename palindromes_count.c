#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int len=0,i=0,flag=0,count=0;
int palindromes(char *);
int main()
{
    char p1[100];
    printf("Enter the string\n");
    __fpurge(stdin);
    scanf("%[^\n]s",p1);
    puts(p1);
    printf("palindromes count=%d\n",palindromes(p1));
}
int palindromes(char *p)
{
	char *token=strtok(p," ");
	while(token!=NULL)
	{
		len=strlen(token)-1,i=0,flag=0;
		while(i<len)
		{
                        if(token[i]!=token[len])
			{
				flag=1;
			}
			i++;
			len--;
		}
		if(flag==0)
		{
			count++;
		}
		token=strtok(NULL," ");
	}
	return count;
}

