#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	int* arr = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) cin >> arr[i];
	int min = N - 1;
	int m = N;
	int n = 1;
	for (int i = 1; i * i <= N; i++)
		if (!(N % i))
			if ((N / i - i) < min)
			{
				m = N / i;
				n = i;
			}
	int count = 0;
	int i = 0, j = 0;
	sort(arr + 0, arr + N);
	reverse(arr + 0, arr + N);
	vector<vector<int>> res;
	for (int i = 0; i < m; i++)
	{
		vector<int> tmp;
		for (int j = 0; j < n; j++)
		{
			tmp.push_back(0);
		}
		res.push_back(tmp);
	}
	res[i][j] = arr[0];
	count = 0;
	while (count < N - 1)
	{
		while (j + 1 < n && !res[i][j + 1]) res[i][++j] = arr[++count];
		while (i + 1 < m && !res[i + 1][j]) res[++i][j] = arr[++count];
		while (j - 1 >= 0 && !res[i][j - 1]) res[i][--j] = arr[++count];
		while (i - 1 >= 0 && !res[i - 1][j]) res[--i][j] = arr[++count];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << res[i][j];
			if (j != n - 1) cout << " ";
		}
		if (i != m - 1) cout << endl;
	}
	return 0;
}
