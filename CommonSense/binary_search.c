#include <stdio.h>

int	binary_search(int *ordered_array, int search_value)
{
	int	lower_bound;
	int	upper_bound;
	int	midpoint;
	int	value_at_midpoint;

	lower_bound = 0;
	upper_bound = (sizeof(ordered_array)) / sizeof(ordered_array[0]);

	while (lower_bound <= upper_bound)
	{
		midpoint = (upper_bound + lower_bound) / 2;
		value_at_midpoint = ordered_array[midpoint];
		if (search_value == value_at_midpoint)
			return (midpoint);
		else if (search_value < value_at_midpoint)
			upper_bound = midpoint - 1;
		else if (search_value > value_at_midpoint)
			lower_bound = midpoint + 1;
	}
	return (-1);
}

int	main(void)
{
	int test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search = 6;

	printf("%d\n", binary_search(test, search));


}
