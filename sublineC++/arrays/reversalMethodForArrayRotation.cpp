#include <iostream>


void reverse(int arr[],int start, int end)
{
	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void reverseArray(int arr[],int n, int d)
{

	d = d % n;
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);

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
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int d;
	std::cin >> d;
	reverseArray(arr,n,d);
	display(arr,n);
	return 0;
}