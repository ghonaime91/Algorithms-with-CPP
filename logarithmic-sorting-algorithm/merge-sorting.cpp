#pragma warning(disable : 4996)
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;


//merge sort is divide and conquer sorting algorithm O(n log n);

void merge(int arr[],int low,int mid,int high)
{
	int s = high - low + 1;
	//temporary array to store result
	int *newArr = new int[s];
	int left = low, right = mid + 1,idx=0;

	//normal merging where both halves have unmerged items
	while (left <= mid && right <= high)
	{
		if (arr[left] <= arr[right])
			newArr[idx++] = arr[left++];
		else
			newArr[idx++] = arr[right++];
	}
	//remaining items are copied to the new array
	while (left <= mid)
		newArr[idx++] = arr[left++];

	while (right <= high)
		newArr[idx++] = arr[right++];

	//merged result are copied back into the original array
	for (int i = 0; i < s; i++)
		arr[i+low] = newArr[i];

	delete[]newArr;
}

void mergeSort(int arr[], int low, int high)
{

	if (low < high)
	{
		int mid = (low + high) / 2;

		//first we divide the main array into two halves and recursively sort them
		mergeSort(arr, low, mid);
		mergeSort(arr, mid+1, high);

		//second conquer: merge the two halves 
		merge(arr, low, mid, high);
	}
}

int main(void)
{
	int arr[] = { 29,10,14,37,13,18,29,11,2,7,40 };

	int size = sizeof(arr) / sizeof(arr[0]);
	int high = size - 1;
	mergeSort(arr, 0, high);



	for (int i = 0; i < size; i++)//output {2, 7, 10, 11, 13, 14, 18, 29, 29, 37, 40}
		cout << arr[i] << " ";


    


	system("pause>0");
}
