#include<stdio.h>
void main()
{
float a;
int b=0;
printf("Enter the change in cents\n");
scanf("%f ",&a);
while(a>=25)
{
b+=1;
a-=25;
}
while(a>=10)
{
b+=1;
a-=10;
}
while(a>=5)
{
b+=1;
a-=5;
}
while(a>=1)
{
b+=1;
a-=1;
}
printf("%d",b);
}

