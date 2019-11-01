#include <iostream>
#include <string>
using namespace std;
int main()
{
	char c;
	string str;
	cin >> c;
	if (c == 'C')
	{
		getline(cin, str);
		getline(cin, str);
		char lastChar = str[0];
		int len = str.length();
		int tmpCount = 1;
		for (int i = 1; i < len; i++)
		{
			if (str[i] == lastChar)
				tmpCount++;
			else
			{
				if (tmpCount == 1)
					cout << lastChar;
				else
					cout << tmpCount << lastChar;
				tmpCount = 1;
				lastChar = str[i];
			}
		}
		if (tmpCount == 1)
			cout << lastChar;
		else
			cout << tmpCount << lastChar;
	}
	else
	{
		getline(cin, str);
		getline(cin, str);
		string num = "";
		int len = str.length();
		for (int i = 0; i < len; i++)
		{
			if (str[i] >= '0' && str[i] <= '9')
				num += str[i];
			else
			{
				if (num.length())
				{
					int times = stoi(num);
					for (int j = 0; j < times; j++)
						cout << str[i];
					num = "";
				}
				else
					cout << str[i];
			}
		}
	}
	return 0;
}
