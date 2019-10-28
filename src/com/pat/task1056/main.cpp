#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	int* arr = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) cin >> arr[i];
	int sum = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			if (j != i)
			{
				sum += arr[i] * 10 + arr[j];
			}
		}
	cout << sum;
	return 0;
}
