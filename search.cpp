#include"test.h"
#include<iostream>

using namespace std;

int main()
{
	int a[200],item;
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"Enter the array to be sorted and searched for:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,n);
	cout<<"\nThe sorted array is:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<"\n\nEnter the element to be searched for:";
	cin>>item;
	search(item,a,n);
	return 0;
}
