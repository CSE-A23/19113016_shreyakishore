#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char input[100];
    int length,i;
    clrscr();
    printf("Enter string\n");
    scanf("%s",input);
    length=strlen(input);
    for(i=0;i<length;i++)
    {
        if(length>=6&&length<=20)
        {
            if(input[i]=='r')
            {
                if(input[i]=='#'||input[i]=='$'||input=='!'||input=='!')
                {
                    if(input[i]!=' ')
                    {
                        printf("Reeword\n");
                    }
                }
            }
        }
    }
    printf("Reeword\n");
    if(length<6||length>20)
    {
        printf("Nay!\n");
    }
    getch();
}
