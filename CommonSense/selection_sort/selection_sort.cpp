#include <iostream>
#include <vector>
using namespace std;

vector<int>	selection_sort(vector<int> &a)
{
	int	N = (int)a.size(); // このキャストなに？
	for(int i = 0; i < N; ++i)
	{
		int	lowestNumberIndex = i; // a 中で最小値の格納されている セルの index 
		for (int j = i + 1; j < N; ++j)
		{
			if(a[i] < a[lowestNumberIndex])
				lowestNumberIndex = i;
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
	int	N;
	cin >> N;
	vector<int> a(N);
	vector<int> ans(N);
	for (int i = 0; i < N; ++i) cin >> a[i];
	ans = selection_sort(a);
	for (int i = 0; i < N; ++i) cout << ans[i] << " ";

	return (0);
}