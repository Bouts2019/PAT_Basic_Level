#include <iostream>
#include <cstring>
using namespace std;
int props[100000] = { 0 };
int* arr;
int main()
{
	int N, M;
	cin >> N >> M;
	arr = (int*)malloc(sizeof(int) * N * 2);
	for (int i = 0; i < N * 2; i++)
		cin >> arr[i];
	int times;
	int tmp;
	bool haveIn = false;
	for (int i = 0; i < M; i++)
	{
		if (i != 0) cout << endl;
		memset(props, 0, sizeof(int) * 100000);
		haveIn = false;
		cin >> times;
		for (int j = 0; j < times; j++)
		{
			cin >> tmp;
			props[tmp] = 1;
		}
		for (int i = 0; i < N; i++)
		{
			if (props[arr[i * 2]] && props[arr[i * 2 + 1]])
			{
				haveIn = true;
				break;
			}
		}
		if (haveIn) cout << "No";
		else cout << "Yes";
	}
	return 0;
}
