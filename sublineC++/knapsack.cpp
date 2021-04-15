// 0/1 KNAPSACK PROBLEM USING (RECURSION + MEMOIZATION)


#include <iostream>
using namespace std;



int knapsack(int value[], int weight[], int W, int n)
{
	int t[n+1][W+1];
	memset(t, -1, sizeof(t));

	if(n == 0 || W == 0)
	{
		return 0;
	}

	if(t[n][W] != -1)	//THIS IS MEMOIZATION (WE ARE STORING THE VALUE IN THE MATRIX)
	{
		return t[n][W];
	}

	if(weight[n-1] > W)
	{
		return t[n][W] = knapsack(value, weight, W, n-1);
	}

	else
	{
		return t[n][W] = std::max((value[n-1] + knapsack(value, weight, W - weight[n-1], n-1)), (knapsack(value, weight, W, n-1)));
	}
}



int main()
{
	
	int value[] = {60,100,120};
	int weight[] = {10,20,30};
	int W = 50;
	int n = sizeof(value) / sizeof(value[0]);
	cout << knapsack(value, weight, W, n);

	return 0;
}