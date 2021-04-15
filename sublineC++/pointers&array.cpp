#include <iostream>

int main()
{
	int b = 10;
	int *p;
	p = &b;

	std::cout << b << std::endl;
	std::cout << *p << std::endl;
	std::cout << &b << std::endl;
	std::cout << p << std::endl;

	int a[5] = {1,2,3,4,5};
	int *q = a;

		for(int i = 0; i < 5; i++ ){

		std::cout << a[i];

	}

		for(int i = 0; i < 5; i++ ){

		std::cout << *(q+i);

	}

		for(int i = 0; i < 5; i++ ){

		std::cout << *(a+i);

	}

		for(int i = 0; i < 5; i++ ){

		std::cout << i[a];

	}



	return 0;
}