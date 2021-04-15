#include <iostream>

void pushZerosToEnd(int arr[], int n)
{
	int count = 0;

	for(int i = 0; i < n; i++)
	{
		if(arr[i] != 0)
		{
			std::swap(arr[i],arr[count]);
			count++;
		}
	}
}

void modifyAndRearrangeAnArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if((arr[i] != 0) && (arr[i] == arr[i+1]))
		{
			arr[i] = 2*arr[i];
			arr[i+1] = 0;
			i++;
		}
	}

	pushZerosToEnd(arr, n);
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
	// int arr[] = {2, 2, 0, 4, 0, 8};
	int arr[] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8};
	int n = sizeof(arr)/sizeof(arr[0]);

	modifyAndRearrangeAnArray(arr, n);
	// pushZerosToEnd(arr, n);
	display(arr, n);
	return 0;
}