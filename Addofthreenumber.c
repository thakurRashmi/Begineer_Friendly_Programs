#include <stdio.h>
#include <conio.h>
sum(int,int,int);
void main()
{
	int a,b,c,d;
	clrscr();
	printf("\nACCEPT VALUE FOR a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	d=sum(a,b,c);
	printf("\nSUM OF %d,%d and %d IS %d",a,b,c,d);
	getch();
}
sum(int x,int y,int z)
{
	int temp;
	temp=x+y+z;
	return(temp);
}
