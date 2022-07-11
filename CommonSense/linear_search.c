int	linear_search(int *ordered_array, int search_value)
{
	int	i;

	i = 0;
	while (ordered_array)
	{
		if (ordered_array[i] == search_value)
			return (i);
		else if (ordered_array[i] > search_value)
			break ;
		i++;
	}
	return (-1);
}