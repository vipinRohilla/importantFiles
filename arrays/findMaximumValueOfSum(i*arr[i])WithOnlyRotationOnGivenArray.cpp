#include <iostream>

int maxSum(int arr[], int n)
{
  //calculate sum of array
  int arrSum = 0;
  int currValue = 0;

  for(int i = 0; i < n; i++)
  {
      arrSum = arrSum + arr[i];
      //calculate R0 without rotation
      currValue = currValue + (i*arr[i]);
  }

  int maxValue = currValue;

  for(int j = 1; j < n; j++)
  {
    currValue = currValue + arrSum - n*arr[n-j];

    if(currValue > maxValue)
    {
       maxValue = currValue;
    }
  }

  return maxValue;

}

int main()
{
  int arr[] = {1,20,2,10};
  int n = sizeof(arr)/sizeof(arr[0]);

  int result = maxSum(arr, n);
  std::cout << result;
  return 0;
}