#include <iostream>
#include <cstdlib>
#include <ctime>

float subsetOne[60];
// float subsetTwo[60];
// float subsetThree[60];
// float subsetFour[60];
// float subsetFive[60];
// float subsetSix[60];
// float subsetSeven[60];
// float subsetEight[60];
// float subsetNine[60];
// float subsetTen[60];


void randomGenerator(float storeRandomArray[], int minLimit, int maxLimit, int randomNumbersRequired)
{
	for(int i = minLimit, j = 0; i < randomNumbersRequired && j < randomNumbersRequired; i++, j++)
	{
		int temp = rand()%maxLimit;

		storeRandomArray[j] = temp;

	}
}

float meanOfDataPoints(float storeRandomArray[], int randomNumbersRequired)
{
	float sum = 0;
	for(int i = 0; i < randomNumbersRequired; i++)
	{
		sum = sum + storeRandomArray[i];
	}
	float mean = (float)(sum/randomNumbersRequired);
	return mean;
}

void makeASubsetOfGivenDataPoints(float subset[], float storeRandomArray[], int maxLimit)
{
	for(int i = 0; i < 60; i++)
	{
		int j = rand()%maxLimit;
		subset[i] = storeRandomArray[j];
	}
}

int meanOfSubest(float subset[])
{
	float sum = 0;
	 for(int i = 0; i < 60; i++)
	{
		sum = sum + subset[i];
	}

	float meanOne = (float)(sum/60);
	return meanOne;
}

void display(float arr[], int n)
{
	for(int i = 0; i < n-1; i++)
	{
		std::cout << arr[i] << ",";
	}
}

int main()
{
	srand(time(0));
	
	std::cout << "Enter the minimum limit : " << std::endl;
	int minLimit;
	std::cin >> minLimit;
	
	std::cout << "Enter the maximum limit : " << std::endl;
	int maxLimit;
	std::cin >> maxLimit;
	
	std::cout << "Enter the number of random numbers required : ";
	int randomNumbersRequired;
	std::cin >> randomNumbersRequired;

	float storeRandomArray[randomNumbersRequired];

	randomGenerator(storeRandomArray, minLimit, maxLimit, randomNumbersRequired);

	std::cout <<  meanOfDataPoints(storeRandomArray, randomNumbersRequired);
	
	std::cout << "\n";

	// makeASubsetOfGivenDataPoints(subsetOne, storeRandomArray, maxLimit);
	// meanOfSubest(subsetOne);
	// display(subsetOne, 60);
	// std::cout << "\n";

	// makeASubsetOfGivenDataPoints(subsetOne, storeRandomArray, maxLimit);
	// meanOfSubest(subsetOne);
	// display(subsetOne, 60);

	// std::cout << "\n";

	std::cout << "How many subsets you want to make : ";
	int numberOfSubsets;
	std::cin >> numberOfSubsets;

	std::cout << "\n";

	float bigMean = 0;
	for(int i = 1; i <= numberOfSubsets; i++)
	{
		makeASubsetOfGivenDataPoints(subsetOne, storeRandomArray, maxLimit);
		// display(subsetOne, 60);
		// std::cout << "\n";
		int temp = meanOfSubest(subsetOne);
		std::cout << temp << ",";
		bigMean = bigMean + temp;
	}
	std::cout << "\n" << "\n";

	std::cout << bigMean/numberOfSubsets;



	// makeASubsetOfGivenDataPoints(subsetTwo, storeRandomArray, maxLimit);
	// meanOfSubest(subsetTwo);

	// makeASubsetOfGivenDataPoints(subsetThree, storeRandomArray, maxLimit);
	// meanOfSubest(subsetThree);

	// makeASubsetOfGivenDataPoints(subsetFour, storeRandomArray, maxLimit);
	// meanOfSubest(subsetFour);

	// makeASubsetOfGivenDataPoints(subsetFive, storeRandomArray, maxLimit);
	// meanOfSubest(subsetFive);

	// makeASubsetOfGivenDataPoints(subsetSix, storeRandomArray, maxLimit);
	// meanOfSubest(subsetSix);

	// makeASubsetOfGivenDataPoints(subsetSeven, storeRandomArray, maxLimit);
	// meanOfSubest(subsetSeven);

	// makeASubsetOfGivenDataPoints(subsetEight, storeRandomArray, maxLimit);
	// meanOfSubest(subsetEight);

	// makeASubsetOfGivenDataPoints(subsetNine, storeRandomArray, maxLimit);
	// meanOfSubest(subsetNine);

	// makeASubsetOfGivenDataPoints(subsetTen, storeRandomArray, maxLimit);
	// meanOfSubest(subsetTen);


	// std::cout << meanOfSubest(subsetOne) << " " << meanOfSubest(subsetTwo) << " " << meanOfSubest(subsetThree)<< " " << meanOfSubest(subsetFour)<< " " << meanOfSubest(subsetFive)<< " " << meanOfSubest(subsetSix)<< " " << meanOfSubest(subsetSeven)<< " " << meanOfSubest(subsetEight)<< " " << meanOfSubest(subsetNine)<< " " << meanOfSubest(subsetTen);
	// std::cout << "\n";


	// display(subsetOne, 60);
	// std::cout << "\n";
	// display(subsetTwo, 60);
	// std::cout << "\n";
	// display(subsetThree, 60);
	// std::cout << "\n";
	// display(subsetFour, 60);
	// std::cout << "\n";
	// display(subsetFive, 60);
	// std::cout << "\n";
	// display(subsetSix, 60);
	// std::cout << "\n";
	// display(subsetSeven, 60);
	// std::cout << "\n";
	// display(subsetEight, 60);
	// std::cout << "\n";
	// display(subsetNine, 60);
	// std::cout << "\n";
	// display(subsetTen, 60);
	// std::cout << "\n";




	// float totalMeanOfAllSubsets = (meanOfSubest(subsetOne) + meanOfSubest(subsetTwo) + meanOfSubest(subsetThree) + meanOfSubest(subsetFour) + meanOfSubest(subsetFive) + meanOfSubest(subsetSix) + meanOfSubest(subsetSeven) + meanOfSubest(subsetEight) + meanOfSubest(subsetNine) + meanOfSubest(subsetTen))/10.0;
	// std::cout << totalMeanOfAllSubsets;





	
	
	return 0;
}