#include <iostream>

//iterative method
void reverseIt(int arr[], int n)
{
	int start = 0;
	int end = n-1;
	while(start < end)
	{
		std::swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

//reverse the string
std::string reverseTheString(std::string str, int length)
{
	int start = 0;
	int end = length-1;
	while(start < end)
	{
		std::swap(str[start], str[end]);
		start++;
		end--;
	}
	return str;
}

//recursive method for reversing the array or string
void reverseItUsingRecursiveMethod(int arr[], int start, int end)
{
	//base condition
	if(start >= end)
	{
		return;
	}
	std::swap(arr[start], arr[end]);

	reverseItUsingRecursiveMethod(arr, start+1, end-1);
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

	std::string str = "helloWorld";
	int length = str.size();
	std::string str1 = reverseTheString(str, length);
	reverseIt(arr, n);
	display(arr, n); std::cout << "\n";
	reverseItUsingRecursiveMethod(arr, 0, 3);
	display(arr, n);

	std::cout << str1;
	return 0;
}