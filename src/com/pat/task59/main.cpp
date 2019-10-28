#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
bool isPrime(int num)
{
	for (int i = 2; i * i <= num; i++)
		if (!(num % i)) return false;
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N = 0;
	cin >> N;
	int* rank = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) cin >> rank[i];
	int K = 0;
	cin >> K;
	int* queue = (int*)malloc(sizeof(int) * K);
	vector<int> checked;
	vector<int>::iterator it;
	for (int i = 0; i < K; i++)
	{
		cin >> queue[i];
		it = find(checked.begin(), checked.end(), queue[i]);
		if (it == checked.end())
		{

			int index = -1;
			for (int j = 0; j < N; j++)
				if (rank[j] == queue[i])
				{
					index = j;
					break;
				}
			if (index == -1) printf("%04d: Are you kidding?\n", queue[i]);
			else if (index + 1 == 1)
			{
				printf("%04d: Mystery Award\n", queue[i]);
				checked.push_back(queue[i]);
			}
			else
			{
				if (isPrime(index + 1))
				{
					printf("%04d: Minion\n", queue[i]);
					checked.push_back(queue[i]);
				}
				else
				{
					printf("%04d: Chocolate\n", queue[i]);
					checked.push_back(queue[i]);
				}
			}
		}
		else
		{
			printf("%04d: Checked\n", queue[i]);
		}
	}
	return 0;
}
