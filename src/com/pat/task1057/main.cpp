#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int len = str.length();
	int sum = 0;
	int zeroNum = 0;
	int oneNum = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			sum += str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			sum += str[i] - 'A' + 1;
	}
	while (sum)
	{
		if (sum & 1) oneNum++;
		else zeroNum++;
		sum >>= 1;
	}
	cout << zeroNum << " " << oneNum;
	return 0;
}
