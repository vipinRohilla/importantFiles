#include <iostream>

void reversal(int arr[], int start, int end)
{
	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void rightRotate(int arr[], int n, int d)
{
	reversal(arr, 0, n-1);
	reversal(arr, 0, d-1);
	reversal(arr, d, n-1);
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
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);

	rightRotate(arr, n, 2);
	display(arr, n);
	return 0;
}