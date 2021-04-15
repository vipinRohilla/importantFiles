#include <iostream>

int main()
{
	int a[50], size, num, pos;
	std::cout << "Enter the size of an array : " ;
	std::cin >> size;

	// Traversal operation on array

	for(int i = 0; i < size; i++)
	{
		std::cout << "Enter the element : ";
		std::cin >> a[i];
	}

	for(int i = 0; i < size; i++)
	{
		std::cout << a[i] << " ";
	}

	std::cout << "\n";
	//insertion in an array at any position

	std::cout << "Enter the number you want to enter in an array : ";
	std::cin >> num;
	std::cout << "Enter the position where you want to enter you numner in an array : ";
	std::cin >> pos;

	if(pos <= 0 || pos > size+1)
	{
		std::cout << "Invalid position";

	}
	else
	{

		for (int i = size-1 ; i >=pos-1 ;i-- )
		{
		
		a[i+1] = a[i];
		
		}

		a[pos-1] = num;
		size++;

	}
	

	for(int i = 0; i < size; i++)
	{
		std::cout << a[i];
	}

	std::cout << std::endl; 

	

	//if you want to enter a number in starting of an array (always) or at a[0]

	std::cout << "Enter the number which you want to submit at starting position : ";
	std::cin >> num;

	for(int i = size-1; i >= 0; i--)
	{

		a[i+1] = a[i];

	}

	a[0] = num;
	size++;

	for(int i = 0; i < size; i++)
	{
		std::cout << a[i];
	}
	std::cout << std::endl; 

	//if you want to enter a number at last position in an array

	std::cout << "Enter the number you want to store in an array at last postion : ";
	std::cin >> num;

	a[size]= num;
	size++;

	for(int i =0 ; i < size ;i++ )
	{
		std::cout << a[i];
	}
		std::cout << std::endl; 

	//if you have an unsorted array so best algorithum is this one with time complexity 1(constant)

	std::cout << "Enter the number you want to submit in an array : " << std::endl;
	std::cin >> num;
	std::cout << "Enter the position where you want to enter the element : " << std::endl;
	std::cin >> pos;
	a[size] = a[pos-1];
	a[pos-1] = num;
	size++;

	for(int i =0 ; i < size ;i++ )
	{
		std::cout << a[i];
	}
		std::cout << std::endl; 








 return 0;
}
