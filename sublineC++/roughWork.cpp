#include <iostream>

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n-1;i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                std::swap(arr[j], arr[j+1]);
            }
        }
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
    int arr[] = {1,4,2,3,5,6,7,8,10,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);
    display(arr,n);

    return 0;
}