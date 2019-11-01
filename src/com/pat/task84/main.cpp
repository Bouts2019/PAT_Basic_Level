#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str, tmp;
	int N = 0, len = 0;
	cin >> str >> N;
	for (int i = 0; i < N - 1; i++)
	{
		tmp = "";
		len = str.length();
		char c = str[0];
		int times = 1;
		for (int j = 1; j < len; j++)
		{
			if (str[j] == c) times++;
			else 
			{
				tmp += c;
				tmp += to_string(times);
				c = str[j];
				times = 1;
			}
		}
		tmp += c;
		tmp += to_string(times);
		str = tmp;
	}
	cout << str;
	return 0;
}
