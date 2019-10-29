#include <iostream>
#include <cstring>
using namespace std;
int people[100000] = { 0 };
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N = 0;
	cin >> N;
	int* couples = (int*)malloc(sizeof(int) * N * 2);
	for (int i = 0; i < N * 2; i++) cin >> couples[i];
	int M = 0;
	cin >> M;
	int tmp = 0;
	for (int i = 0; i < M; i++)
	{
		cin >> tmp;
		people[tmp] = 1;
	}
	for (int i = 0; i < N; i++)
	{
		if (people[couples[i * 2]] && people[couples[i * 2 + 1]])
		{
			people[couples[i * 2]] = 0;
			people[couples[i * 2 + 1]] = 0;
			M -= 2;
		}
	}
	printf("%d\n", M);
	bool isFirst = true;
	for (int i = 0; i < 100000; i++)
		if (people[i])
		{
			if (!isFirst) printf(" ");
			printf("%05d", i);
			isFirst = false;
		}
	return 0;
}
