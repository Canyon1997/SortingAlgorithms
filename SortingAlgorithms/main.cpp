#include <ctime>
#include <iostream>
#include "MergeSort.h"
#include "QuickSort.h"


void main()
{
	std::srand(std::time(nullptr));
	std::vector<int> MergeArray;
	std::vector<int> QuickArray;

	for (int i = 0; i < 10; i++)
	{
		int number1 = (rand() % 100) + 1;
		int number2 = (rand() % 100) + 1;

		MergeArray.push_back(number1);
		QuickArray.push_back(number2);
	}

	std::cout << "Performing MergeSort" << std::endl;

	std::cout << "Printing current order of numbers in array before merge sort" << std::endl;
	for (const auto& num : MergeArray)
	{
		printf("%d ", num);
	}
	printf("\n");

	std::cout << "Performing Merge Sort and printing results of array after" << std::endl;
	MergeSort(MergeArray, 0, MergeArray.size() - 1);

	for (const auto& num : MergeArray)
	{
		printf("%d ", num);
	}
	printf("\n\n");

	std::cout << "Performing QuickSort" << std::endl;

	std::cout << "Printing current order of numbers in array before quick sort" << std::endl;
	for (const auto& num : QuickArray)
	{
		printf("%d ", num);
	}
	printf("\n");

	std::cout << "Performing Quick Sort and printing results of array after" << std::endl;
	QuickSort(QuickArray, 0, QuickArray.size() - 1);
	for (const auto& num : QuickArray)
	{
		printf("%d ", num);
	}
	printf("\n\n");

	




}