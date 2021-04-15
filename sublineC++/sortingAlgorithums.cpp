#include <iostream>

void bubbleSort(int a[], int n)
{
	
	int flag;
	for(int i = 0; i < n-1; i++)
	{
		flag = 0;
		for(int j = 0; j < n-1-i; j++)
		{
			if(a[j] > a[j+1])
			{
				std::swap(a[j],a[j+1]);
				flag = 1;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}

	std::cout << "bubble sort : ";
	for(int i = 0; i < 5; i++)
	{
		std::cout << a[i] << " ";
	}

}

void insertionSort(int a[], int n)
{
	int temp, j;
	for(int i = 1; i < n; i++)
	{
		temp = a[i];
		j = i-1;
		while(j >= 0 && a[j] > temp)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}

	std::cout << "insertion sort : ";
	for(int i = 0; i < 5; i++)
	{
		std::cout << a[i] << " ";
	}
}

void selectionSort(int a[], int n)
{
	int i,j;
	for(i = 0; i < n-1; i++)
	{
		int min = i;
		for(j = i+1; j < n; j++)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}

		if(min != i)
		{
			std::swap(a[i], a[min]);
		}
	}

	std::cout << "selection sort : ";
	for(int i = 0; i < 5; i++)
	{
		std::cout << a[i] << " ";
	}

}

int partition(int a[], int lowerBound, int upperBound)
{
	int pivot, start, end;

	pivot = a[lowerBound];
	start = lowerBound;
	end = upperBound;

	while(start < end)
	{
		while(a[start] <= pivot)
		{
			start++;
		}
		while(a[end] > pivot)
		{
			end--;
		}
		if(start < end)
		{
			std::swap(a[start], a[end]);
		}
	}

	std::swap(a[lowerBound], a[end]);
	return end;
}

void quickSort(int a[], int lowerBound, int upperBound)
{
	int location;
	if(lowerBound < upperBound)
	{
		location = partition(a, lowerBound, upperBound);
		quickSort(a, lowerBound, location-1);
		quickSort(a, location+1, upperBound);
	}
}

int main()
{
	const int n = 5;
	int a[n] = {15, 16, 6, 8, 5};

	bubbleSort(a,n);
	std::cout << "\n";
	insertionSort(a,n);
	std::cout << "\n";
	selectionSort(a,n);
	std::cout << "\n";
	quickSort(a,0,n-1);
	std::cout << "quick Sort : "; 
	for(int i = 0; i < 5; i++)
	{
		std::cout << a[i] << " ";
	}


	return 0;

	
}