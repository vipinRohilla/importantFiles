#include <iostream>

int findLargestNumber(int arr[], int n)
{
	int max = arr[0];

	for(int i = 1; i < n; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	int arr[] = {1,8,7,6,0,4,3,2,11,44,2,3,6};
	int n = sizeof(arr)/sizeof(arr[0]);

	std::cout << findLargestNumber(arr, n);
	return 0;
}