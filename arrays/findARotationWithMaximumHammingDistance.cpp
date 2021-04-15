#include <iostream>

int maxHamming(int arr[], int n)
{
	int brr[2*n];
	for(int i = 0; i < n; i++)
	{
		brr[i] = brr[i+n] = arr[i];
	}

	int maxHamming = 0;

	for(int i = 1; i < n; i++)
	{
		int count = 0;
		for(int j = i, k = 0; j < (i + n); j++, k++)
		{
			if(brr[j] != arr[k])
			{
				count++;
			}
		}

		if(count == n)
		{
			return n;
		}

		maxHamming = std::max(count, maxHamming);
	}

	return maxHamming;
}

int main()
{
	int arr[] = {1,4,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	std::cout << maxHamming(arr, n);
	return 0;
}