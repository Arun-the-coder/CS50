#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
 char a[300];
 cout<<"Enter the string to be encrypted in UPPER CASE:";
 cin.getline(a,300);
 int m=strlen(a);
 for(int i=0;i<m;i++)
 {
  int n=(a[i]-65);
  a[i] = (90-n);
  cout<<a[i];
 }
  return 0;
 }
 
  
