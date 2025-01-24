#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int count=0,len,i,k;
void reverse_sub(char *,char *p);
int main()
{
	char p1[20],p2[20];
	printf("Enter the string:\n");
	__fpurge(stdin);
	scanf("%[^\n]s",p1);
	printf("Enter the sub string:\n");
	__fpurge(stdin);
	scanf("%[^\n]s",p2);
	reverse_sub(p1,p2);
	puts(p1);
}
void reverse_sub(char *p,char *sub)
{
	
	while(p=strstr(p,sub))
	{
		len=strlen(sub)-1,i=0,k=len;
		while(i<len)
		{
			p[i]^=p[len]^=p[i]^=p[len];
			i++;
			len--;
		}
		p=p+k;
	}
}
		
	

