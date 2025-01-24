#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int len,i;
void reverse(char *p);
int main()
{
    char p1[100],p2[100];
    printf("Enter the string\n");
    __fpurge(stdin);
    scanf("%[^\n]s",p1);
    //printf("Enter the sub string\n");
    //__fpurge(stdin);
    //scanf("%[^\n]s",p2);
    puts(p1);
    reverse(p1);
    puts(p1);
    //puts(p2);
}
void reverse(char *p)
{
    len=strlen(p)-1;
    i=0;
    while(i<len)
    {
        p[i]^=p[len]^=p[i]^=p[len];
        i++;
        len--;
    }
}
