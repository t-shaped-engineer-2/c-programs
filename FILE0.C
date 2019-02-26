#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char ch;
	clrscr();
	fp=fopen("filetxt.c","r");
	ch=getc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch = getc(fp);

	}
	getch();

}

