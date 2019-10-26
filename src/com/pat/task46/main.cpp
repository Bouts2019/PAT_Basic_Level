#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int*> rounds;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int* tmp = (int*)malloc(sizeof(int) * 4);
		for (int j = 0; j < 4; j++)
			cin >> tmp[j];
		rounds.push_back(tmp);
	}
	int aDrink = 0;
	int bDrink = 0;
	for (int i = 0; i < N; i++)
	{
		if (rounds[i][1] == rounds[i][0] + rounds[i][2] && rounds[i][3] == rounds[i][0] + rounds[i][2])
			continue;
		else if (rounds[i][1] == rounds[i][0] + rounds[i][2])
			bDrink++;
		else if (rounds[i][3] == rounds[i][0] + rounds[i][2])
			aDrink++;
	}
	cout << aDrink << " " << bDrink;
	return 0;
}
