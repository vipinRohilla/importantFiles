#include <iostream>


void rotateClockwise(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i = n-2; i >=0; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[0] = temp;
}

void rotateClockwiseAgain(int arr[], int n, int d)
{
    d = d % n;
    for(int i = 0; i < d; i++)
    {
        rotateClockwise(arr,n);
    }
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
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d;
    std::cout << "Enter the value how many times you want to rotateClockwise : ";
    std::cin >> d;
    rotateClockwiseAgain(arr,n,d);

    display(arr,n);

    return 0;
}