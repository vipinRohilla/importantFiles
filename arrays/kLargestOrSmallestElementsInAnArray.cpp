#include <iostream>

void kLargest(int arr[], int n, int k)
{
	for(int i = 0; i < k-1; i++)
	{
		for(int j = 0; j < n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				std::swap(arr[j], arr[j+1]);
			}
		}
	}
}

int main()
{
	int arr[] = { 1, 23, 12, 9, 30, 2, 50 };
	int n = sizeof(arr)/sizeof(arr[0]);

	int k;
	std::cin >> k;
	kLargest(arr, n, k);

	for(int i = n-k; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}