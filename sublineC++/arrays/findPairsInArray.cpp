#include <iostream>

bool findPair(int arr[], int n, int x)
{	
	int i;
	for(i = 0; i < n; i++)
	{
		if(arr[i] > arr[i+1])
		{
			break;
		}
	}

	int l = (i + 1) % n;
	int r = i;

	while(l != r)
	{
		if(arr[l] + arr[r] == x)
		{
			return true;
		}
		if(arr[l] + arr[r] > x)
		{
			r = (r -1 + n) % n;
		}
		else
		{
			l = (l + 1 + n) % n;
		}

	}
	return false;

	
}

int countAllPairs(int arr[], int n, int x)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(arr[i] > arr[i+1])
		{
			break;
		}
	}
	int l = (i+1) % n;
	int r = i;

	int count = 0;

	while(l != r)
	{
		if(arr[l] + arr[r] == x)
		{
			count++;
			if(l == (r - 1 + n)%n)
			{
				return count;
			}
			l = (l + 1) % n;
			r = (r - 1 + n) % n;
		}

		else if(arr[l] + arr[r] < x)
		{
			l = (l + 1) % n;
		}
		else
		{
			r = (r - 1 + n) % n;
		}
	}

	return count;
}


int main()
{
	int arr[] = {4,5,6,7,1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	std::cin >> x;
	bool find = findPair(arr, n, x);
	int totalCount = countAllPairs(arr, n, x);

	std::cout << totalCount << std::endl;
	if(find)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	return 0;
}