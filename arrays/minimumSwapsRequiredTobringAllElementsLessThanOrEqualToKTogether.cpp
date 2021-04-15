#include <iostream>

int minSwap(int arr[], int n, int k)
{
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] <= k)
		{
			count++;
		}
	}

	int bad = 0;
	for(int i = 0; i < count; i++)
	{
		if(arr[i] > k)
		{
			bad++;
		}
	}

	int ans = bad;

	for(int i = 0, j = count; j < n; i++, j++)
	{
		if(arr[i] > k)
		{
			bad--;
		}

		if(arr[j > k])
		{
			bad++;
		}

		ans = std::min(bad, ans);
	}
	return ans;
}


int main()
{
	int arr[] = {2, 1, 5, 6, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k;
	std::cout << "Enter the value of k : ";
	std::cin >> k;

	int result = minSwap(arr, n, k);
	std::cout << result;
	return 0;
}