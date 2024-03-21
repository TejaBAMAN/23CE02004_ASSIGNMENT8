#include<stdio.h>
#include<string.h>
int main()
{
    int m,n;
    printf("enter len:");
    scanf("%d",&m);
    char a[m+1];
    printf("enter the string 1:");
    scanf("%s",a);
    a[m]='\0';
    printf("enter len:");
    scanf("%d",&n);
    char b[n+1];
    printf("enter the string 2:");
    scanf("%s",b);
    b[n]='\0';
    char c[m+n+1];
    c[0]='\0'; 
    strcat(c,a);
    strcat(c,b);
    printf("%s",c);
    return 0;
}