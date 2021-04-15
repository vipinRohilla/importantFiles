#include <iostream>

void rearrangeArray(int arr[], int n)
{
	int evenPosition = n/2;
	int oddPosition = n - evenPosition;

	int tempArr[n];

	//make a auxillary copy of original array
	for(int i = 0; i < n; i++)
	{
		tempArr[i] = arr[i];
	}

	//sort the  temp array (bubble sort algorithum)
    for(int i = 0; i < n-1;i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(tempArr[j] > tempArr[j+1])
            {
                std::swap(tempArr[j], tempArr[j+1]);
            }
        }
    }

    int j = oddPosition - 1;

    for(int i = 0; i < n; i = i+2)
    {
    	arr[i] = tempArr[j];
    	j--;
    }

    j = oddPosition;

    for(int i = 1; i < n; i = i+2)
    {
    	arr[i] = tempArr[j];
    	j++;
    }
}

//print the array
void display(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	// int arr[] = {1,2,3,4,5,6,7};
	int arr[] = {1, 2, 1, 4, 5, 6, 8, 8};
	int n = sizeof(arr)/sizeof(arr[0]);

	rearrangeArray(arr, n);
	display(arr, n);
	return 0;
}