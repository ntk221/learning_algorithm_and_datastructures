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

int	partition(int arr[], int left, int right)
{
	int	pivot_index;
	int	pivot;

	pivot_index = right;
	pivot = arr[right];
	right--;
	while (true)
	{
		while (arr[left] < pivot)
			left++;
		while (arr[right] > pivot)
			right--;
		if (left >= right)
			break ;
		else
		{
			swap(&arr[left], &arr[right]);
			left++;
		}
	}
	swap(&arr[left], &arr[pivot_index]);
	return left;
}
 
void	quick_sort(int	arr[], int left, int right)
{
	size_t	pivot_index;

	if (left - right <= 0) // base case
	{
		pivot_index = partition(arr, left, right);
		quick_sort(arr, left, pivot_index - 1); // 左の部分配列を再帰的に解く
		quick_sort(arr, pivot_index + 1, right); // 右の部分配列について再帰的に解く
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

/* 
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
*/

/*
void quick_sort (int array[], int left, int right) {
  int pivot;

  if (left < right) {
    pivot = partition(array, left, right);
    quick_sort(array, left, pivot-1);   // pivotを境に再帰的にクイックソート
    quick_sort(array, pivot+1, right);
  }
}
*/
