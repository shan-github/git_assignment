#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char str[200];
    fp = fopen("fileName.txt", "a");
    printf("Enter your name:");
    gets(str);
    fprintf(fp,"\n%s",str);
    fclose(fp);
    return 0;
}