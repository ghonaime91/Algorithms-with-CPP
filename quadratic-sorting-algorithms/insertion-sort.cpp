#pragma warning(disable : 4996)
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//Implementation of Quadratec Sorting Algorithms O(n2) (Insertion Sort)
/*
# Insertion Sort Idea:

-Similar to how most people arrange a hand of poker cards
-Start with one card in your hand
-Pick the next card and insert it into its proper sorted order
-Repeat previous step for all cards
-FOR i = 1 to n{
	WHILE the current element (at index i) is smaller than the element
	before it 
		SWAP the two elements
}
-Note: i represents the index into the array
*/


void swap(int &n1, int &n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
// insertion sort 
void insertionSort(int arr[], int n)
{
   for (int i = 1; i < n - 1; i++)
	{
	  int temp = arr[i];
	  int j = i-1;
	  	while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
	  arr[j + 1] = temp;
	}
}
int main(void)
{
	int arr[] = {29,10,14,37,13};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	insertionSort(arr,n);

	//printing the array items after insertion sorting
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";


	system("pause>0");
}
