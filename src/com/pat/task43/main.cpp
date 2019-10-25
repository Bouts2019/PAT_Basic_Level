#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int ascii[128] = { 0 };
	string str;
	cin >> str;
	int len = str.length();
	for (int i = 0; i < len; i++)
		if (str[i] == 'P' || str[i] == 'A' || str[i] == 'T' || str[i] == 'e' || str[i] == 's' || str[i] == 't')
			ascii[str[i]]++;
	int index[6] = { 'P', 'A', 'T', 'e', 's', 't' };
	while (true)
	{
		bool isEmpty = true;
		for (int i = 0; i < 6; i++)
			if (ascii[index[i]])
			{
				cout << (char)(index[i]);
				ascii[index[i]]--;
				isEmpty = false;
			}
		if (isEmpty)
			break;
	}
	return 0;
}
