
#include <iostream>

int main()
{

	int value[] = {60,100,120};
	int weight[] = {10,20,30};
	int W = 50;
	int n = sizeof(value) / sizeof(value[0]);

	double t[n+1][W+1];

	for(int i = 1; i < n+1; i++)
	{
		for (int j = 1; j < W+1; j++)
		{
			if(weight[i-1] <= W)
			{
				t[i][j] = std::max(value[i-1] + t[i-1][j-weight[i-1]], t[i-1][j]);
			}
			else
			{
				t[i][j] = t[i-1][j];
			}
		}
	}

	std::cout << t[n][W];
	return 0;
}