#include <iostream>

// void reorderAnArray(int arr[], int index[], int n)
// {
// 	int newArray[n];

// 	for(int i = 0; i < n; i++)
// 	{
// 		newArray[index[i]] = arr[i];
// 	}

// 	for(int i = 0; i < n; i++)
// 	{
// 		std::cout << newArray[i] << " ";
// 	}
// }

void reorderAnArray(int arr[], int index[], int n)
{
    // Fix all elements one by one
    for (int i=0; i<n; i++)
    {
        // While index[i] and arr[i] are not fixed
        while (index[i] != i)
        {
            // Store values of the target (or correct)
            // position before placing arr[i] there
            int  oldTargetI  = index[index[i]];
            int oldTargetE  = arr[index[i]];
 
            // Place arr[i] at its target (or correct)
            // position. Also copy corrected index for
            // new position
            arr[index[i]] = arr[i];
            index[index[i]] = index[i];
 
            // Copy old target values to arr[i] and
            // index[i]
            index[i] = oldTargetI;
            arr[i]   = oldTargetE;
        }
    }

    for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	// int arr[] = {10,11,12};
	// int index[] = {1,0,2};

	int arr[] = {50, 40, 70, 60, 90};
	int index[] = {3,  0,  4,  1,  2};
	int n = sizeof(arr)/sizeof(arr[0]);

	reorderAnArray(arr, index, n);
	return 0;
}