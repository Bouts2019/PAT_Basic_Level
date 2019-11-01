#include <iostream>
using namespace std;
int main()
{
	int M, X, Y, tmpValue, tmpDiff;
	double first, second, third;
	bool haveSolution = false;
	cin >> M >> X >> Y;
	for (int i = 99; i >= 10; i--)
	{
		tmpValue = i % 10 * 10 + i / 10 % 10;
		tmpDiff = i - tmpValue > 0 ? i - tmpValue : tmpValue - i;
		if ((((double)tmpDiff / (double)X * (double)Y) - (int)((double)tmpDiff / (double)X * (double)Y) == 0) && (int)((double)tmpDiff / (double)X * (double)Y) == tmpValue)
		{
			first = i;
			second = tmpValue;
			third = (double)tmpDiff / (double)X;
			haveSolution = true;
			break;
		}
	}
	if (haveSolution)
	{
		cout << first;
		cout << " ";
		if (first > M) cout << "Cong";
		else if (first == M) cout << "Ping";
		else cout << "Gai";
		cout << " ";
		if (second > M) cout << "Cong";
		else if (second == M) cout << "Ping";
		else cout << "Gai";
		cout << " ";
		if (third > M) cout << "Cong";
		else if (third == M) cout << "Ping";
		else cout << "Gai";
	}
	else cout << "No Solution";
	return 0;
}
