#include <iostream>
#include <vector>
using namespace std;

vector<int>	selection_sort(vector<int> &a)
{
	int	N = (int)a.size(); // このキャストなに？
	for(int i = 0; i < N; i++)
	{
		int	lowestNumberIndex = i; // a 中で最小値の格納されている セルの index 
		for (int j = i + 1; j < N; j++)
		{
			if(a[j] < a[lowestNumberIndex])
				lowestNumberIndex = j;
		}
		// 最終的に lowestNumberIndex が 最初のセルのindex ではないときには、値の交換をする 
		if (lowestNumberIndex != i)
		{
			int	temp = a[i];
			a[i] = a[lowestNumberIndex];
			a[lowestNumberIndex] = temp;
		}
	}
	return (a);
}

int	main()
{
	vector<int> a = {5, 3, 2};
	vector<int> ans(5);
	ans = selection_sort(a);
	for (int i = 0; i < 3; ++i) cout << ans[i] << " ";

	return (0);
}