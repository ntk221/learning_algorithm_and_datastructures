#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
参考url: https://qiita.com/omu58n/items/7794f097b2c569a469bc


*/

void	swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/* size_t	partition(int arr[], size_t left, size_t right)
{
	size_t	pivot_index;
	int	pivot;
	size_t	i, j;

	i = left;
	j = right;
	pivot = right;
	j--;
	while (true)
	{
		while (arr[i] < arr[pivot])
			i++;
		while (arr[j] > arr[pivot])
			j--;
		if (left >= right)
			break ;
		else
		{
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[pivot]);
	return i;
}
*/ 

int partition (int array[], int left, int right) {
  int i, j, pivot;
  i = left;
  j = right + 1;
  pivot = left;   // 先頭要素をpivotとする

  do {
    do { i++; } while (array[i] < array[pivot]);
    do { j--; } while (array[pivot] < array[j]);
    // pivotより小さいものを左へ、大きいものを右へ
    if (i < j) { swap(&array[i], &array[j]); }
  } while (i < j);

  swap(&array[pivot], &array[j]);   //pivotを更新

  return j;
}

/* void	quick_sort(int	arr[], size_t left, size_t right)
{
	size_t	pivot_index;
	printf("left: %d\n", left);
	printf("right: %d\n", right);
	// for (size_t i = 0; i < 6; i++)
	//	printf("%d ", test1[i]);
	puts("");

	if (right - left > 0) // base case
	{
		pivot_index = partition(arr, left, right);
		// printf("pivot_index %d\n", pivot_index);
		quick_sort(arr, left, pivot_index - 1); // 左の部分配列を再帰的に解く
		quick_sort(arr, pivot_index + 1, right); // 右の部分配列について再帰的に解く
	}
	
}
*/

void quick_sort (int array[], int left, int right) {
  int pivot;

  if (left < right) {
    pivot = partition(array, left, right);
    quick_sort(array, left, pivot-1);   // pivotを境に再帰的にクイックソート
    quick_sort(array, pivot+1, right);
  }
}


int	main(void)
{
	int     test1[6] = {0, 5, 2, 1, 6, 3};
	quick_sort(test1, 0, 5);
	 for (size_t i = 0; i < 6; i++)
		printf("%d ", test1[i]);
	return (0);
}
