#include <iostream>

//Naive Approach
void fixArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(arr[j] == i)
			{
				std::swap(arr[j], arr[i]);
				break;
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		if(arr[i] != i)
		{
			arr[i] = -1;
		}
	}
}

//Another approach
void fixArrayUsingAnotherMethod(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(arr[i] != -1 && arr[i] != i)
		{
			int x = arr[i];

			while(arr[x] != -1 && arr[x] != x)
			{
				std::swap(arr[x], x);
			}

			arr[x] = x;

			if(arr[i] != i)
			{
				arr[i] = -1;
			}
		}
	}
}

//Another approach 
void fixArrayUsingAnotherMethod_3(int arr[], int n)
{
	for(int i = 0; i < n;)
	{
		if(arr[i] > 0 && arr[i] != i)
		{
			std::swap(arr[i], arr[arr[i]]);
		}
		else
		{
			i++;
		}
	}
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
	int arr[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
	int n = sizeof(arr)/sizeof(arr[0]);

	// fixArray(arr, n);
	// fixArrayUsingAnotherMethod(arr, n);
	fixArrayUsingAnotherMethod_3(arr, n);
	display(arr, n);
	return 0;
}