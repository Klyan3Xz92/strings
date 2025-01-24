#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int count=0,len;
int sub_count(char *,char *p);
int main()
{
	char p1[20],p2[20];
	printf("Enter the string:\n");
	__fpurge(stdin);
	scanf("%[^\n]s",p1);
	printf("Enter the sub string:\n");
	__fpurge(stdin);
	scanf("%[^\n]s",p2);
	printf("sub string count =%d\n",sub_count(p1,p2));
}
int sub_count(char *p,char *sub)
{
	len=strlen(sub);
	while(p=strstr(p,sub))
	{
		count++;
		p=p+len;
	}
	return count;
}
		
	

