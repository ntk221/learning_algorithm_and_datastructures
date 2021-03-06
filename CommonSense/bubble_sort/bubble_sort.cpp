#include <iostream>
#include <tuple>
using namespace std;

int	*bubble_sort(int *list, int len)
{
	int	unsorted_until_index = len - 1;
	int	sorted = 0;
	int	tmp;
	int	i;

	while (!sorted)
	{
		i = 0;
		sorted = 1;
		while (i < unsorted_until_index)
		{
			if (list[i] > list[i + 1])
			{
				tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
				sorted = 0;
			}
			i++;
		}
		unsorted_until_index -= 1;
	}
	return (list);
}

int	main(void)
{
	int	test[] = {4, 3, 5, 7, 10, 6, 1, 2, 9, 8};
	int	len = sizeof(test) / sizeof(test[0]);
	int *ans = bubble_sort(test, len);

	for (int i = 0; i < len; ++i) cout << ans[i] << " ";
	cout << endl;

}