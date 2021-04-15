#include <iostream>
#include <stdlib.h>
#include <time.h>

void randomize(int arr[], int n)
{
	srand(time(NULL));

	for(int i = n-1; i > 0; i--)
	{
		int j = rand() % i;
		std::swap(arr[i], arr[j]);
	}
}

void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}

}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    randomize (arr, n); 
    printArray(arr, n); 
	return 0;
}