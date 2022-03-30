#pragma warning(disable : 4996)
#include <iostream>

using std::cout;
using std::cin;
using std::endl;



//Implementation of Quadratec Sorting Algorithms O(n2) (Bubble Sort)
/*
# Bubble Sort Idea:
-Given an array of n items
-1# Compare pair of adjacent items
-2# Swap if the items are out of order
-3# Repeat until the end of array
-4# Increase i by 1 and go to step 1
At the end of a single iteration:The largest item
will be at the last position (like bubble that float to the end of array)
*/

void swap(int& n1, int& n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
// bubble sort 
void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{

		for (int j = 0; j < n - 1 - i; j++)
			if (arr[j + 1] < arr[j])
				swap(arr[j + 1], arr[j]);

	}
}
int main(void)
{
	int arr[] = { 29,10,14,37,13 };
	int n = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, n);

	//printing the array items after bubble sorting
	for (int i = 0; i < n; i++)
		cout << arr[i] << "  ";


	system("pause>0");
}
