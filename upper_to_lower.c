#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
void upper_to_lower(char *p);
int main()
{
    char p1[100];
    printf("Enter the string\n");
    __fpurge(stdin);
    scanf("%[^\n]s",p1);
    puts(p1);
    upper_to_lower(p1);
    printf("After string=%s\n",p1);
}
void upper_to_lower(char *p)
{
	int i=0;
	while(p[i])
	{
		if(p[i]>=90 && p[i]<=122)
		{
			p[i]=p[i]-32;
		}
		i++;
	}
}
