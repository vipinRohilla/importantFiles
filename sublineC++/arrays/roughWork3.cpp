#include <iostream>

int main()
{
	double p;
	double arr[101];
	double S = 100.0;

	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i = 1; i <= 100; i++)
	{
		p = (S*i)/100.0;
		arr[i] = p;
		S = S - p;
	}

	

	// for(int i = 1; i <= n; i++)
	// {
	// 	for(int j = 1; j <= n-1-i; j++)
	// 	{
	// 		if(arr[j] > arr[j+1])
	// 		{
	// 			std::swap(arr[j], arr[j+1]);
	// 		}
	// 	}
	// }

	for(int i = 1; i < n; i++)
	{
		std::cout << i << " " << arr[i] << std::endl;
	}
	return 0;
}