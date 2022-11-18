#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int	test1[] = {0, 5, 2, 1, 6, 3};

void	swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

size_t	partition(int arr[], size_t left, size_t right)
{
	size_t	pivot_index;
	int	pivot;
	int	tmp;
	
	pivot_index = right;
	pivot = arr[pivot_index];
	right--;
	while (true)
	{
		while (arr[left] < pivot)
			left++;
		while (arr[right] > pivot)
			right--;
		if (left >= right)
			break;
		else
		{
			swap(&arr[left], &arr[right]);
			left++;
		}
	}
	swap(&arr[left], &arr[pivot_index]);
	return left;
}

int	main(void)
{
	size_t pivot_index = partition(test1, 0, 5);
	for (size_t i = 0; i < 6; i++)
		printf("%d ", test1[i]);
	return (0);
}
