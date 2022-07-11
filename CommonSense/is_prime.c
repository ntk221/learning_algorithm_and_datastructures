#include <stdio.h>

int	is_prime(int num)
{
	int	i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", is_prime(5));
	printf("%d\n", is_prime(6));
}