#include <iostream>

//using binary search we can find smallest element in logn time
int findMin(int arr[], int low, int high)
{
	if(high < low)
	{
		return arr[0];
	}
	if(high == low)
	{
		return arr[low];
	}

	int mid = (low + high)/2;

	if(mid < high && arr[mid+1] < arr[mid])
	{
		return arr[mid+1];
	}

	if(mid > low && arr[mid] < arr[mid-1])
	{
		return arr[mid];
	}

	if(arr[high] > arr[mid])
	{
		return findMin(arr, low, mid-1);
	}
	return findMin(arr, mid+1, high);
}

//for handling the duplicates in logn time we can use this algorithum
 int findMinInLogNTimeWithDuplicates(int arr[], int low, int high)
 {
 	while(low < high)
 	{
 		int mid = (low + high)/2;

 		if(arr[mid] == arr[high])
 		{
 			high--;
 		}
 		else if(arr[mid] > arr[high])
 		{
 			low = mid + 1;
 		}
 		else
 		{
 			high = mid;
 		}
 	}
 	return arr[high];
 }

int main()
{
	int arr[] = {5,6,7,8,9,2,2,2,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);

	std::cout << findMin(arr, 0, n-1); std::cout << "\n";
	std::cout << findMinInLogNTimeWithDuplicates(arr, 0, n-1);
	return 0;
}