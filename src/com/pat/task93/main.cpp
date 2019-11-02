#include <iostream>
#include <string>
using namespace std;
string A, B, res = "";
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int ascii[128] = { 0 };
	getline(cin, A);
	getline(cin, B);
	int len = A.length();
	for (int i = 0; i < len; i++)
	{
		if (!ascii[A[i]])
		{
			ascii[A[i]]++;
			res += A[i];
		}
	}
	len = B.length();
	for (int i = 0; i < len; i++)
	{
		if (!ascii[B[i]])
		{
			ascii[B[i]]++;
			res += B[i];
		}
	}
	cout << res;
	return 0;
}
