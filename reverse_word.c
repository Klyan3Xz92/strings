#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int len,i,start=0,k;
void reverse_word(char *p);
int main()
{
    char p1[100],p2[100];
    printf("Enter the string\n");
    __fpurge(stdin);
    scanf("%[^\n]s",p1);
    puts(p1);
    reverse_word(p1);
    puts(p1);
}
void reverse_word(char *p)
{
	i=0;
	while(p[i])
	{
		if(p[i+1]==32 || p[i+1]=='\0')
		{
			len=i,k=i;
			while(start<len)
			{
				p[start]^=p[len]^=p[start]^=p[len];
				start++;
				len--;
			}
			start=k+2;
		}
		i++;
	}
}


