#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char *str;
    printf("Enter a sentence-");
    scanf("%[^\n]s",str);
    fflush(stdin);
    str[0]=toupper(str[0]);
    for(int i=0; str[i]!='\0';i++)
    {
        if(isblank(str[i])!=0) 
        {
            str[i+1]=toupper(str[i+1]);
        }
    }
    printf("%s",str);

}