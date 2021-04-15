#include <iostream>


int main()
{
	int arr[] = {2,3,7,8,10};
	std::cout << "Enter the sum you want to find : ";
	int sum;
	std::cin >> sum;
	int n = 5;

	int t[n + 1][sum + 1];
	
	for(int i = 0; i < n+1; i++)
	{
		for(int j = 0; j < sum+1; j++)
		{
			if(i == 0)
			{
				t[i][j] = false;	
			}

			if(j == 0)
			{
				t[i][j] = true;
			}
			
		}
	}

	for(int i = 1; i < n+1; i++)
	{
		for(int j = 1; j < sum+1; j++)
		{
			if(arr[i-1] <= sum)
			{
				t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
			}
			else
			{
				t[i][j] = t[i-1][j];
			}
			
		}
	}	

	
	if (t[n][sum])
    {
        std::cout << "YES, subset exist" << std::endl;
    }
    else{
        std::cout << "NO, subset is exist" << std::endl;
    }



	
	return 0;
}