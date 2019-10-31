#include <iostream>
#include <string>
using namespace std;
int main()
{
	int N;
	cin >> N;
	string str;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> str;
			if (str[2] == 'T')
				cout << str[0] - 'A' + 1;
		}
	}
	return 0;
}
