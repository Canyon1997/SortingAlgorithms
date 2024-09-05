#include "MergeSort.h"

void MergeSort(std::vector<int>& array, int start, int stop)
{
	if (start >= stop)
	{
		return;
	}

	int mid = start + (stop - start) / 2;
	MergeSort(array, start, mid);
	MergeSort(array, mid + 1, stop);
	Merge(array, start, mid, stop);
}

void Merge(std::vector<int>& array, int start, int mid, int stop)
{
	int leftMax = mid - start + 1;
	int rightMax = stop - mid;

	std::vector<int> arrL;
	std::vector<int> arrR;

	for (int i = 0; i < leftMax; i++)
	{
		arrL.push_back(array[start + i]);
	}

	for (int j = 0; j < rightMax; j++)
	{
		arrR.push_back(array[mid + j + 1]);
	}

	int k = start;

	while (!arrL.empty() && !arrR.empty())
	{
		int l = arrL.front();
		int r = arrR.front();

		if (l <= r)
		{
			array[k] = l;
			arrL.erase(arrL.begin());
		}
		else
		{
			array[k] = r;
			arrR.erase(arrR.begin());
		}

		k++;
	}

	while (!arrL.empty())
	{
		array[k] = arrL.front();
		arrL.erase(arrL.begin());
		k++;
	}

	while (!arrR.empty())
	{
		array[k] = arrR.front();
		arrR.erase(arrR.begin());
		k++;
	}
}
