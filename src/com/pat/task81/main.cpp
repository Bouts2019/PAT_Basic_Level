#include <iostream>
#include <string>
using namespace std;
int main()
{
	int N;
	int len;
	string str;
	cin >> N;
	getline(cin, str);
	for (int i = 0; i < N; i++)
	{
		if (i != 0) cout << endl;
		getline(cin, str);
		int len = str.length();
		if (len >= 6)
		{
			bool hadEnWord = false;
			bool hadNum = false;
			bool hadOther = false;
			for (int j = 0; j < len; j++)
			{
				if (str[j] >= 'a' && str[j] <= 'z') hadEnWord = true;
				else if (str[j] >= 'A' && str[j] <= 'Z') hadEnWord = true;
				else if (str[j] >= '0' && str[j] <= '9') hadNum = true;
				else if (str[j] == '.');
				else hadOther = true;
			}
			if (hadOther) cout << "Your password is tai luan le.";
			else if (!hadEnWord) cout << "Your password needs zi mu.";
			else if (!hadNum) cout << "Your password needs shu zi.";
			else if (!hadOther && hadEnWord && hadNum) cout << "Your password is wan mei.";
		}
		else
			cout << "Your password is tai duan le.";
	}
	return 0;
}
