#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> cakes = vector<int>(N);
	int volume;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> volume;
			cakes[j] += volume;
		}
	}
	int max = -1;
	vector<int> citys;
	for (int i = 0; i < N; i++)
	{
		if (cakes[i] > max)
		{
			max = cakes[i];
			citys.clear();
			citys.push_back(i + 1);
		}
		else if (cakes[i] == max)
			citys.push_back(i + 1);
	}
	int len = citys.size();
	cout << max << endl;
	for (int i = 0; i < len; i++)
	{
		if (i != 0)cout << " ";
		cout << citys[i];
	}
	return 0;
}
