#include <iostream>


//method 1
void leftRotateByOne(int arr[], int n)
{
	int temp = arr[0];
	for(int i = 0; i < n; i++)
	{
		arr[i] = arr[i+1];
	}
	arr[n-1] = temp;
}

void leftRotate(int arr[], int n, int d)
{
	for(int i = 0; i < d; i++)
	{
		leftRotateByOne(arr, n);
	}
}

void display(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}
//method 1 complete


//method 2(juggling method)

int gcd(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}

void leftRotateUsingJugglingMethod(int arr[], int n, int d)
{
	d = d % n;
	int gcdFinal = gcd(n, d);

	for(int i = 0; i < gcdFinal; i++)
	{
		int temp = arr[i];
		int j = i;

	
		while(true)
		{
			int k = j + d;
			if(k >= n)
			{
				k = k - n;
			}
			if(k == i)
			{
				break;
			}
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
}

//method 2 complete


//method 3 (reversal method)

void reversal(int arr[], int start, int end)
{
	while(start <= end)
	{
		std::swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

void leftRotateByReversalMethod(int arr[], int n, int d)
{
	reversal(arr, 0, d-1);
	reversal(arr, d, n-1);
	reversal(arr, 0, n-1);
}

//method 3 complete


int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int d;
	std::cin >> d;
	display(arr, n); std::cout << " \n";
	leftRotate(arr, n, d); std::cout << " \n";
	display(arr, n);

	leftRotateUsingJugglingMethod(arr, n, d); std::cout << " \n";
	display(arr, n);

	leftRotateByReversalMethod(arr, n, d); std::cout << " \n";
	display(arr, n);

	
	return 0;
}