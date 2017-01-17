#include<stdio.h>
#include<string.h>
#include<iostream>	
using namespace std;
int main()
{
char a[100];
int i,l;
std::cout<<"Enter the string:";
std::cin.getline(a,100);
l=strlen(a);
std::cout<<a[0];
for(i=0;i<l;i++)
{
if(a[i]==' ')
{
std::cout<<a[i+1];
}
}
return 0;
}

