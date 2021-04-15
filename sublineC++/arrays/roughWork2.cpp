#include <iostream>

void merge(int arr[], int lowerBound, int mid, int upperBound)
{
	// int n = sizeof(arr)/sizeof(arr[0]);
	// int brr[n];

	int i = lowerBound;
	int j = mid+1;
	int k = lowerBound;

	while(i <= mid && j <=upperBound)
	{
		if(arr[i] <= arr[j])
		{
			brr[k] = arr[i];
			i++; k++;
		}
		else
		{
			brr[k] = arr[j];
			j++; k++;
		}
	}

	if(i > mid)
	{
		while(j >= upperBound)
		{
			brr[k] = arr[j];
			j++; k++;
		}
	}
	else
	{
		while(i <= mid)
		{
			brr[k] = arr[i];
			i++; k++;
		}
	}

}

void mergeSort(int arr[], int lowerBound, int upperBound)
{
	if(lb < ub)
	{
		int mid = (lowerBound + upperBound)/2;
		mergeSort(arr, lowerBound, mid);
		mergeSort(arr, mid+1, upperBound);
		merge(arr, lowerBound, mid, upperBound);
	}
}




int main()
{
	int arr[] = {1,2,4,3,7,6,9,8};
	int n = sizeof(arr)/sizeof(arr[0]);

	mergeSort(arr, 0, n-1);

	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	
	return 0;
}