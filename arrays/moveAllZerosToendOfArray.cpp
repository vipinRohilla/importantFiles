// A C++ program to move all zeroes at the end of array
#include <iostream>

// Function which pushes all zeros to end of an array.
void pushZerosToEnd(int arr[], int n)
{
	int start = 0;
	int end = n-1;

	while(start < end)
	{
		//if element is greater than zero from starting position than jump to the next element
		while(arr[start] > 0)
		{
			start++;
		}
		//if element is equal to zero from ending position than jump to the right next element
		while(arr[end] == 0)
		{
			end--;
		}

		//swap the zero and non-zero element
		if(start < end)
		{
			std::swap(arr[start], arr[end]);
		}
	}
}

void moveZerosToEndOfAnArray(int arr[], int n)
{
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] != 0)
		{
			std::swap(arr[count++], arr[i]);
		}
	}
}

//to print the array
void display(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}

// Driver program to test above function
int main()
{
	int arr[] = {1, 2, 0, 4, 3, 0, 5, 0, 2};
	int arr_1[] = {1, 2, 0, 4, 3, 0, 5, 0, 2, 2, 4, 5, 0, 7, 0, 5};

	int n = sizeof(arr)/sizeof(arr[0]);
	int n_1 = sizeof(arr_1)/sizeof(arr_1[0]);

	pushZerosToEnd(arr, n);
	display(arr, n);
	std::cout << "\n";
	
	moveZerosToEndOfAnArray(arr_1, n_1);
	display(arr_1, n_1);
	return 0;
}