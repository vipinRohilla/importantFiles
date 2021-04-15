#include <iostream>

// void insertionSort(int arr[], int n)
// {
// 	for(int i = 1; i < n; i++)
// 	{
// 		int temp = arr[i];
// 		int j = i-1;

// 		while(j >= 0 && arr[j] > temp)
// 		{
// 			arr[j+1] = arr[j];
// 			j--;
// 		}

// 		arr[j+1] = temp;
// 	}

// 	for(int i = 0; i < n; i++)
// 	{
// 		std::cout << arr[i] << " ";
// 	}
// }


//time complexity of this approach is O(n^2) using insertion sort method
// void rearrangePositiveAndNegative(int arr[], int n)
// {
// 	for(int i = 1; i < n; i++)
// 	{
// 		int temp = arr[i];
// 		int j = i - 1;

// 		if(temp > 0)
// 		{
// 			continue;
// 		}

// 		while(j >= 0 && arr[j] > 0)
// 		{
// 			arr[j+1] = arr[j];
// 			j--;
// 		}
// 		arr[j+1] = temp;
// 	}

// 	for(int i = 0; i < n; i++)
// 	{
// 		std::cout << arr[i] << " ";
// 	}
// }


//better approach using merg sort with time complexity O(nlogn)
void merge(int arr[], int lowerBound, int mid, int upperBound)
{
	int n1 = mid-lowerBound+1;
	int n2 = upperBound-mid;
	int left[n1];
	int right[n2];

	for(int i = 0; i < n1; i++)
	{
		left[i] = arr[lowerBound + i];
	}
	for(int j = 0; j < n2; j++)
	{
		right[j] = arr[mid+1+j];
	}

	int i = 0;
	int j = 0;
	int k = lowerBound;

	while(i < n1 && left[i] < 0)
	{
		arr[k] = left[i];
		i++; k++;
	}
	while(j < n2 && right[j] < 0)
	{
		arr[k] = right[j];
		j++; k++;
	}

	  while (i < n1)
	  {
	  	 arr[k++] = left[i++];
	  }
       
 
    while (j < n2)
    {

        arr[k++] = right[j++];
    }

}

void rearrangePositiveAndNegativeUsingMegeSort(int arr[], int lowerBound, int upperBound)
{
	if(lowerBound < upperBound)
	{
		int mid = (lowerBound + upperBound)/2;
		rearrangePositiveAndNegativeUsingMegeSort(arr, lowerBound, mid);
		rearrangePositiveAndNegativeUsingMegeSort(arr, mid+1, upperBound);
		merge(arr, lowerBound, mid, upperBound);
	}

}

int main()
{
	int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3};
	int n = sizeof(arr)/sizeof(arr[0]);

	// insertionSort(arr, n);
	rearrangePositiveAndNegativeUsingMegeSort(arr, 0, n-1);
	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}


