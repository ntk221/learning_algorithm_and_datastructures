#include <iostream>
using namespace std;

int	has_duplicate_value(int *array, int len)
{
	int	i;
	int	j;
	int	steps;

	steps = 0;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			steps++;
			if (i != j && array[i] == array[j])
				return (1);
			j++;
		}
		i++;
	}
	cout << steps << endl;
	return (0);
}

int	main(void)
{
	int	test[] = {1, 2, 3, 4, 5};
	int	len;

	len = sizeof(test) / sizeof(test[0]);
	has_duplicate_value(test, len);
}