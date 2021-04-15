// #include <iostream>
// //time complexity is O(n) and space complexity is O(n)
// // void arrayEvenAndOdd(int arr[], int n)
// // {
// // 	int brr[n];
// // 	int j = 0;
// // 	for(int i = 0; i < n; i++)
// // 	{
// // 		if(arr[i] % 2 == 0)
// // 		{
// // 			brr[j] = arr[i];
// // 			j++;
// // 		}
// // 	}
// // 	for(int i = 0; i < n; i++)
// // 	{
// // 		if(arr[i]%2 != 0)
// // 		{
// // 			brr[j] = arr[i];
// // 			j++;
// // 		}
// // 	}
	
// // 	for(int i = 0; i < n ;i++)
// // 	{
// // 		std::cout << brr[i] << " ";
// // 	}		
	
// // }

// //optimize function based on lomuto's partition schema
// void arrayEvenAndOddUsingLomutopartitionScheme(int arr[], int n)
// {
// 	int i = -1,j = 0;

// 	while(j != n)
// 	{
// 		if(arr[j]%2 == 0)
// 		{
// 			i++;
// 			std::swap(arr[i], arr[j]);
// 		}
// 		j++;
// 	}

// 	for(int i = 0; i < n; i++)
// 	{
// 		std::cout << arr[i] << " ";
// 	}
// }


// int main()
// {
// 	int arr[] = { 1, 3, 2, 4, 7, 6, 9, 10 };
//     int n = sizeof(arr) / sizeof(int);
 
//     // Function call
//     arrayEvenAndOddUsingLomutopartitionScheme(arr, n);
// 	return 0;
// }


#include <iostream>
#include <set>
using namespace std;
  
int kthSmallest(int arr[], int n, int k)
{
    // Insert all elements into the set
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
  
    // Traverse set and print k-th element
    auto it = s.begin();
    for (int i = 0; i < k - 1; i++)
       {
        it++;
       }
    return *it;


}
  
int main()
{
    int arr[] = { 12, 3, 5, 7, 3, 19 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    cout << "K'th smallest element is "
         << kthSmallest(arr, n, k);
    return 0;
}