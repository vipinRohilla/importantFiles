#include <iostream>

void bubbleSort(int arr[], int n)
{
	for(int i = 0; i < n-1; i++)
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

void rearrangeAnArray(int arr[], int n)
{
	bubbleSort(arr, n);
	int newArray[n];
	int start = 0;
	int end = n-1;

	for(int i = 0; i < n; i++)
	{
		if(i%2 == 0)
		{
			newArray[i] = arr[start];
			start++;
		}
		else
		{
			newArray[i] = arr[end];
			end--;
		}
		
	}

	for(int i = 0; i < n; i++)
	{
		arr[i] = newArray[i];
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
	int arr[] = {5, 8, 1, 4, 2, 9, 3, 7, 6};
	int n = sizeof(arr)/sizeof(arr[0]);

	rearrangeAnArray(arr, n);
	display(arr, n);
	return 0;
}