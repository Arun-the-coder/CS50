#include<bits/stdc++.h>
using namespace std;
int main()
{
char a[100];
int k;
std::cout<<"Enter the string in uppercase:";
std::cin.getline(a,100);
std::cout<<"Enter the key:";
std::cin>>k;
int n=strlen(a);
for(int i=0;i<n;i++)
{

	a[i] = (((a[i]-65)+k) % 26) + 65;
	std::cout<<a[i];
}
return 0;
}

	
