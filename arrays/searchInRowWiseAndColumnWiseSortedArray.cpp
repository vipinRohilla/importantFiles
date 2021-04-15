#include <iostream>

int arr[2];

void findGivenElementAndReturnTheIndex(int mat[4][4], int key, int arr[])
{
	int i = 0;
	int j = 3;
	int n = 4;
	int m = 4;

	while((i >=0 && i < n) && (j >=0 && j < m))
	{
		if(mat[i][j] == key)
		{
			arr[0] = i;
			arr[1] = j;
			return;
			// break;
		}
		else if(mat[i][j] > key)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	// return -1;
			arr[0] = -1;
			arr[1] = -1;

}

int main()
{	
	int mat[4][4] = {
        { 10, 20, 30, 40 },
        { 15, 25, 35, 45 },
        { 25, 29, 37, 48 },
        { 32, 33, 39, 50 }
    };

    findGivenElementAndReturnTheIndex(mat, 33, arr);
    std::cout << std::endl;
    std::cout  << "at row : " << arr[0] << std::endl;
    std::cout << "at coloumn : " << arr[1] << std::endl;
	return 0;
}