#include <iostream>
#include <string>
using namespace std;
int main()
{
	string pwd;
	int maxTime = 0;
	cin >> pwd >> maxTime;
	string a;
	getline(cin, a);
	for (int i = 0; i < maxTime; i++)
	{
		string tmpPwd;
		getline(cin, tmpPwd);
		if (tmpPwd == "#") break;
		if (tmpPwd == pwd)
		{
			cout << "Welcome in" << endl;
			break;
		}
		else
		{
			cout << "Wrong password: " << tmpPwd << endl;
			if (i == maxTime - 1)
				cout << "Account locked" << endl;
		}
	}

	return 0;
}
