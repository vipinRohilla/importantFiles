#include <iostream>

void rearrange(int arr[], int n)
{
	int pivot = 0;

	int start = 0;
	int end = n-1;

	while(start < end)
	{
		while(arr[start] < pivot)
		{
			start++;
		}

		while(arr[end] > pivot)
		{
			end--;
		}

		if(start < end)
		{
			std::swap(arr[start], arr[end]);
		}
	}

	std::swap(arr[end], arr[pivot]);

	int pos = end + 1;
	int neg = 0;
  
    while (pos < n && neg < pos && arr[neg] < 0)
    {
        std::swap(arr[neg], arr[pos]);
        pos++;
        neg += 2;
    }
}

// void bubbleSort(int arr[], int n)
// {
// 	for(int i = 0; i < n-1; i++)
// 	{
// 		for(int j = 0; j < n-1-i; j++)
// 		{
// 			if(arr[j] < arr[j+1])
// 			{
// 				std::swap(arr[j], arr[j+1]);
// 			}
// 		}
// 	}
// }

void display(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
	int n = sizeof(arr)/sizeof(arr[0]);

	rearrange(arr, n);
	// bubbleSort(arr, n);
	display(arr, n);
	return 0;

}