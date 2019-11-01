#include <iostream>
using namespace std;
int diff[10001] = { 0 };
int main()
{
	int N, num;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		num = num - (i + 1) > 0 ? num - (i + 1) : i + 1 - num;
		diff[num]++;
	}
	bool hadPrint = false;
	for (int i = 10000; i >= 0; i--)
	{
		if (diff[i] >= 2)
		{
			if (hadPrint) cout << endl;
			cout << i << " " << diff[i];
			hadPrint = true;
		}
	}
	return 0;
}
