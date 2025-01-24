#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int i=0,len=0,start=0;
void swap(char *,int,int);
void reverse(char *);
int main()
{
    char p1[100];
    printf("Enter the string\n");
    __fpurge(stdin);
    scanf("%[^\n]s",p1);
    puts(p1);
    reverse(p1);
    puts(p1);
}
void reverse(char *p)
{
	len=strlen(p)-1;
	swap(p,i,len);
	i=0;
	while(p[i])
	{
		len=i;
		if(p[i+1]==32 || p[i+1]=='\0')
		{
			swap(p,start,len);
			start=i+2;
		}
		i++;
	}

}
void swap(char *p,int i,int len)
{
	while(i<len)
	{
		p[i]^=p[len]^=p[i]^=p[len];
		i++;
		len--;
	}
}
