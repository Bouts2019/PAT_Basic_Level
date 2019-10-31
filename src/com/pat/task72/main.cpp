#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int goods[10000] = { 0 };
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int idx = 0;
		cin >> idx;
		goods[idx] = 1;
	}
	string name;
	int times;
	int good;
	bool hadPrint = false;
	int peopleNum = 0;
	int goodsNum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> name >> times;
		hadPrint = false;
		for (int j = 0; j < times; j++)
		{
			cin >> good;
			if (goods[good])
			{
				if (!hadPrint)
				{
					cout << name << ": " << setw(4) << setfill('0') << good;
					peopleNum++;
					hadPrint = true;
				}
				else cout << " " << setw(4) << setfill('0') << good;
				goodsNum++;
			}
		}
		if (hadPrint)
			cout << endl;
	}
	cout << peopleNum << " " << goodsNum;
	return 0;
}
