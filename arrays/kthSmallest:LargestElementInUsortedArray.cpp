#include <iostream>

void maxHeapify(int arr[], int n, int i)
{
	int largest = i;
	int leftChild = 2*i + 1 ;
	// std::cout << leftChild << " ";
	int rightChild = (2*i) + 2;
	// std::cout << rightChild << " ";

	if(leftChild < n && arr[leftChild] > arr[largest])
	{
		largest = leftChild;
	}
	if(rightChild < n && arr[rightChild] > arr[largest])
	{
		largest = rightChild;
	}
	if(largest != i)
	{
		std::swap(arr[largest], arr[i]);
		maxHeapify(arr, n, largest);
	}
}

void heapSortUsingMaxHeap(int arr[], int n)
{
	for(int i = (n/2) - 1; i >= 0; i--)
	{
		maxHeapify(arr, n, i);
		// std::cout << "yup";
	}

	for(int i = n-1; i >= 0; i--)
	{
		std::swap(arr[0], arr[i]);
		maxHeapify(arr, i , 0);
		// std::cout << " hey";
	}
}

void minHeapify(int arr[], int n, int i)
{
	int smallest = i;
	int leftChild = 2*i + 1;
	int rightChild = 2*i + 2;

	if(leftChild < n && arr[leftChild] < arr[smallest])
	{
		smallest = leftChild;
	}
	if(rightChild < n && arr[rightChild] < arr[smallest])
	{
		smallest = rightChild;
	}
	if(smallest != i)
	{
		std::swap(arr[smallest], arr[i]);
		minHeapify(arr, n, smallest);
	}
}

void heapSortUsingMinHeap(int arr[], int n)
{
	for(int i = n/2 -1; i >=0; i--)
	{
		minHeapify(arr, n, i);
	}

	for(int i = n-1; i >=0; i--)
	{
		std::swap(arr[0], arr[i]);
		minHeapify(arr, i ,0);
	}
}

int extractminima(int arr[], int n, int k)
{
	if(k == 1)
	{
		return arr[0];
	}
	else
	{
		for(int i = n-1; k > 1; i--)
		{
			std::swap(arr[0], arr[i]);
			minHeapify(arr, i, 0);
			k--;
		}
	}
	return arr[0];
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
	int arr[] = {15,7,20,1,17,10,30};
	int n = sizeof(arr)/sizeof(arr[0]);

	// heapSortUsingMaxHeap(arr, n);
	// display(arr, n);
	// std::cout << "\n";
	// heapSortUsingMinHeap(arr, n);
	// display(arr, n);

	for(int i = n/2 -1; i >=0; i--)
	{
		minHeapify(arr, n, i);
	}
	int k;
	std::cout << "Enter the kth value : ";
	std::cin >> k;
	std::cout << extractminima(arr, n, k) << std::endl;
	display(arr, n);
	

	// display(arr, n);



	return 0;
}