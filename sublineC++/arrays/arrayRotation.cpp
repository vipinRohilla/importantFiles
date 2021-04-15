#include <iostream>

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



void reverseTheArray(int arr[], int n, int d)
{
	d = d % n;
	int gcdFinal = gcd(n,d);
	int k = 0;

	for(int i = 0; i < gcdFinal; i++)
	{
		int temp = arr[i];
		int j = i;

		while(true)
		{
			k = k + d;
			if( k >= n)
			{
				k = k-n;
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

int search(int arr[], int l, int h, int key)
{
	if(l > h)
	{
		return -1;
	}

	int mid = (l + h)/2;
	if(arr[mid] == key)
	{
		return mid;
	}

	if(arr[l] <= arr[mid])
	{
		if(key >= arr[l] && key <= arr[mid])
		{
			return search(arr, l, mid-1, key);
		}
		else
		{
			return search(arr, mid+1, h, key);
		}
	}
	if(key >= arr[mid] && key <= arr[h])
	{
		return search(arr, mid+1, h, key);
	}
	else
	{
		return search(arr, l, mid-1, key);
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
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int d, key;
	// std::cin >> d;
	std::cin >> key;
	int index = search(arr, 0, n-1, key);

	if(index != -1)
	{
		std::cout << "at Index : " << index << std::endl;
		std::cout << "at Position : " << index+1 << std::endl;
	}
	else
	{
		std::cout << "Not found" << std::endl;
	}
	display(arr,n);








	return 0;
}