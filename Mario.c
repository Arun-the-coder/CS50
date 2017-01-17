#include<stdio.h>
void main()
{
int a,b;
int h;
printf("Enter the height\n");
scanf("%d",&h);
int l=0;
for(int i=h;i>0;i--)
{
	for(int j=1;j<i;j++)
	{ 	
		printf(" ");
	}
	for(int k=0;k<(2+l);k++)
	{
		printf("#");
	}
printf("\n");
++l;
}
}
