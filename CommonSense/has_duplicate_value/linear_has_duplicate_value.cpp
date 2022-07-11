#include <iostream>
using namespace std;

int hasDuplicateValue(int *array,int len)
{
	int	steps;
	int	existingNumbers[100] = {0};
	int	i;

	steps = 0;
	i = 0;
	while (i < len)
	{
		steps++;
		if (existingNumbers[array[i]] == 1)
			return (1);
		else
			existingNumbers[array[i]] = 1;
		i++;
	}
	cout << steps << endl;
	return (0);
}

int	main(void)
{
	int	test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	len;

	len = sizeof(test) / sizeof(test[0]);
	hasDuplicateValue(test, len);
}