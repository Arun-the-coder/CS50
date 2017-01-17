#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
 char a[300],k[300],l[300];
 int i,j,h;
 cout<<"Enter the string to be encrypted in uppercase:";
 cin.getline(a,300);
 cout<<"Enter the key in uppercase:";
 cin.getline(k,300);
 int n=strlen(a);
 int m=strlen(k);
 char c[300];
 for(i=0,j=0,h=0;i<n;i++,j++,h++)
 {
	 int p=(i%m);
	 k[i]=k[p];
	 c[j]=k[i]-65;
	 a[h]=a[h]+c[j];
	 cout<<a[h];
 }
 return 0;
}
 
