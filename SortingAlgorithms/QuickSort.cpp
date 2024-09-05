#include "QuickSort.h"

void QuickSort(std::vector<int>& array, int low, int high)
{
	while (low < high)
	{
		int j = Pivot(array, low, high);
		QuickSort(array, low, j);
		QuickSort(array, j + 1, high);
	}
}

int Pivot(std::vector<int>& array, int low, int high)
{
	int pivot = array[low];
	int i = low;
	int j = high;

	while (i < j)
	{
		if (array[i] <= pivot)
		{
			i++;
		}

		if (array[j] > pivot)
		{
			j--;
		}

		if (i < j)
		{
			int n = array[i];
			array[i] = array[j];
			array[j] = n;
		}
	}

	int n = array[j];
	array[j] = pivot;
	array[low] = n;

	return j;
}
