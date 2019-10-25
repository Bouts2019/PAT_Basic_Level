#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string str;
	int ascii[128] = { 0 };
	getline(cin, str);
	int len = str.length();
	for (int i = 0; i < len; i++)
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ascii[str[i] + ('a' - 'A')]++;
			continue;	
		}
		else
			ascii[str[i]]++;
	int max = 0;
	char maxChar = 0;
	for (int i = (int)('z'); i >= (int)('a'); i--)
		if (ascii[i] >= max)
		{
			max = ascii[i];
			maxChar = i;
		}
	cout << maxChar << " " << max << endl;
	return 0;
}
