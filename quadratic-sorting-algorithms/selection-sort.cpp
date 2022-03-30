#pragma warning(disable : 4996)
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


//Implementation of Quadratec Sorting Algorithms O(n2) (selection sort)
/*
# Selection Sort Idea:
-Given an array of n items
-There is a FOR loop that iterates from i=0 to i=n-1
-1# find the smallest item x, in the range of [0...n-1]
-2# swap x with (i)th item
-3# increase i by 1 and go to step 1
*/

void swap(int &n1, int &n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
// selection sort 
void selectionSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;

		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[min])
				min = j;
		if (min != i)
			swap(arr[i], arr[min]);
	}
}
int main(void)
{
	int arr[] = {25,15,7,9,29,35,11,4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	
	selectionSort(arr,n);
	//printing after selection sort
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";

	system("pause>0");
}
