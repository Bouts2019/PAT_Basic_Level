#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int N = 0, M = 0;
	cin >> N >> M;
	int* scores = (int*)malloc(sizeof(int) * M);
	for (int i = 0; i < M; i++) cin >> scores[i];
	int* rightAns = (int*)malloc(sizeof(int) * M);
	for (int i = 0; i < M; i++) cin >> rightAns[i];
	int tmp = 0;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = 0;
		for (int j = 0; j < M; j++)
		{
			cin >> tmp;
			if (tmp == rightAns[j])
				sum += scores[j];
		}
		cout << sum << endl;
	}
	return 0;
}
