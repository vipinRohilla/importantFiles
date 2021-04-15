#include <iostream>
#include <vector>

std::vector<int> Primes;
bool ar[90000001];

// Naive approach (brute force)
bool isPrimeWithTimeComplexityBigO_n(int n)
{
	if(n == 1)
	{
		return true;
	}
	else
	{
		for(int i = 2; i < n; i++)
		{
			if(n % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}

//better approach
bool isPrimeWithTimeComplexityBigO_sqrt_n(int n)
{
	if(n == 1)
	{
		return true;
	}
	for (int i = 2; i*i <= n; i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int prime[1000001];
void seiveOfEratosthenes(int n)
{
	for(int i = 1; i <= n; i++)
	{
		prime[i] = 1;
	}

	for(int i = 2; i*i <= n; i++)
	{
		if(prime[i] == 1)
		{
			for(int j = i*2; j <= n; j = j+i)
			{
				prime[j] = 0;
			}
		}
	}

	for (int p=2; p<=n; p++)
	{
		if (prime[p]) 
         {
         	std::cout << p << " "; 
         } 
	} 
       

}

void findingTheKthPrimeNumberUsingSieve()
{
	int maxN = 90000000;
	ar[0] = ar[1] = true;

	for(int i = 2; i*i < maxN; i++)
	{
		if (ar[i] == false)
		{
			for(int j = i*2; j <= maxN; j = j+i)
			{
				ar[j] = true;
			}
		}
	}

	for(int i = 2; i <= maxN; i++)
	{
		if(ar[i] == false)
		{
			Primes.push_back(i);
		}
	}
}

void primeFactorization(int N)
{
	for(int i = 2; i <= N; i++)
	{
		if(N % i == 0)
		{
			int count = 0;
			while(N % i == 0)
			{
				count++;
				N = N/i;	
			}
			std::cout << i << "^" << count << std::endl ;
		}
	}
}

int main()
{
	// std::cout << isPrimeWithTimeComplexityBigO_n(7) << std::endl;
	// std::cout << isPrimeWithTimeComplexityBigO_sqrt_n(12) << std::endl;
	// seiveOfEratosthenes(10);

	// int t, n;
	// std::cin >> t;
	// findingTheKthPrimeNumberUsingSieve();

	// while(t--)
	// {
	// 	std::cin >> n;
	// 	std::cout << Primes[n-1];
	// }	

	primeFactorization(1234);

















	return 0;
}