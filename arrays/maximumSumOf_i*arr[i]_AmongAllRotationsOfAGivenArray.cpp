#include <iostream>

//naive approach
int maxSum(int arr[], int n)
{
	int res = INT_MIN;

	

	for(int i = 0; i < n; i++)
	{
		int currvalue = 0;

		for(int j = 0; j < n; j++)
		{
			int index = (i+j)%n;
			currvalue = currvalue + (j*arr[index]);
		}

		res = std::max(res, currvalue);
	}

	return res;
}

int maxSumWithBetterApproach(int arr[], int n)
{
	int curr_sum = 0;
	for(int i = 0; i < n; i++)
	{
		curr_sum = curr_sum + arr[i];
	}

	int currValue = 0;
	for(int i = 0; i < n; i++)
	{
		currValue = currValue + (i*arr[i]);
	}

	int res = currValue;

	for(int i = 1; i < n; i++)
	{
		int nexValue = currValue - (curr_sum - arr[i-1]) + arr[i-1]*(n-1);
		currValue = nexValue;
		res = std::max(res,nexValue);
	}

	return res;
}

int main()
{
	int arr[] = {8,3,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);

	std::cout << maxSum(arr, n);
	std::cout << "\n";
	std::cout << maxSumWithBetterApproach(arr, n);
	return 0;
}