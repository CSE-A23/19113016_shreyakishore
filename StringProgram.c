#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
  char a[100];
  int x,i;
  clrscr();
  printf("Enter the string\n");
  scanf("%s",a);
  x=strlen(a);
  if(x%2!=0)
  {
    for(i=x;i>=x-2;i--)
    {
      a[i]='O';
    }
  }
  for(i=0;i<x;i++)
  {
    if(a[i]=='i')
      a[i]='e';
    if(a[i]=='a')
      a[i]='u';
    printf("%c",a[i]);
  }
  getch();
}
