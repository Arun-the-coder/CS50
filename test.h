/**
 * helpers.h
 *
 * Helper functions for Problem Set 3.
 */
#include<iostream>
using namespace std;
/**
 * Returns true if value is in array of n values, else false.
 */
int search(int item, int a[], int n)
{
	
	int first = 0;
	int last = n-1;
	int middle = (first+last)/2;
	while (first <= last)
	{
		if(a[middle] < item)
		{
			first = middle + 1;

		}
		else if(a[middle] == item)
		{
			cout<<item<<" is found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<item<<" is not present in the list";
	}
	return 0;
}



/**
 * Sorts array of n values.
 */
void sort(int a[], int n)
{
int c;
for(int j=1;j<n;j++)
{
 	for(int i=0;i<(n-j);i++)
 		{ 
		 if(a[i]>=a[i+1])
		 {	c=a[i+1];
		 	a[i+1]=a[i];
		 	a[i]=c;
		 }
                } 
}
}
