#include <iostream>

void rearrangeAnArray(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
		if(i % 2 == 0)
		{
			if(arr[i] > arr[i-1])
			{
				std::swap(arr[i], arr[i-1]);
			}
		}
		
		else
		{
			if(arr[i] < arr[i-1])
			{
				std::swap(arr[i], arr[i-1]);
			}
		}
	}
}

void display(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = {1,3,2,2,7};
	int n = sizeof(arr)/sizeof(arr[0]);

	rearrangeAnArray(arr, n);
	display(arr, n);
	return 0;
}