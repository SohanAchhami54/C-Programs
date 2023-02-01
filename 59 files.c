#include <stdio.h>
void main()
{
FILE *fp;
char c;
clrscr();
fp=fopen("C:\\test.txt","w+b");
if(fp==NULL)
	{
	printf("\nCannot create file.");
	exit(0);
	}
fputs("I study B.Sc. CSIT", fp);
fclose(fp);
getch();
}
