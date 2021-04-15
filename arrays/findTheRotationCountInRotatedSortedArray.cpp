#include <iostream>

//using linear search
int countRotationUsingLinearSearch(int arr[], int n)
{
	int count = 0;
	//find the index of smallest number
	int min = arr[0];
	for(int i = 0; i < n; i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
			count = i;
		}
	}
	return count;

}

//using binary search
int countRotationUsingBinarySearch(int arr[], int low, int high)
{
	//base condition
	if(high < low)
	{
		return 0;
	}

	if(high == low)
	{
		return low;
	}

	int mid = (low + high)/2 ;

	if(mid < high && arr[mid + 1] < arr[mid])
	{
		return (mid+1);
	}
	if(mid > low && arr[mid] < arr[mid - 1])
	{
		return mid;
	}

	if(arr[high] > arr[mid])
	{
		return countRotationUsingBinarySearch(arr, low, mid-1);
	}
	
	return countRotationUsingBinarySearch(arr, mid+1, high);

}

int main()
{
	int arr[] = {18,20,23,2,3,6,12};
	int n = sizeof(arr)/sizeof(arr[0]);

	std::cout << countRotationUsingLinearSearch(arr, n); std::cout << "\n";
	std::cout << countRotationUsingBinarySearch(arr, 0, n-1);
	return 0;
}