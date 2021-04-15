#include <iostream>

//copy the array two times in temp array
void preProcessing(int arr[], int n, int temp[])
{
	for(int i = 0; i < n; i++)
	{
		temp[i] = temp[i+n] = arr[i];
	}
}

void leftRotate(int arr[], int n, int temp[], int k)
{
	int start = k % n;

	for(int i = start; i < start + n; i++)
	{
		std::cout << temp[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int arr[] = {1,3,5,7,9};
	int n = sizeof(arr)/sizeof(arr[0]);

	int temp[2*n];

	preProcessing(arr, n, temp);

	leftRotate(arr, n, temp, 1);
	leftRotate(arr, n, temp, 2);
	leftRotate(arr, n, temp, 3);
	leftRotate(arr, n, temp, 4);


	return 0;
}