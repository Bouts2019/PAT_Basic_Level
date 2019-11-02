#include <iostream>
#include <string>
using namespace std;
bool isPrime(long long num)
{
	for (long long i = 2; i * i <= num; i++)
		if (num % i == 0)
			return false;
	return true;
}
int main()
{
	int L, K, len;
	string num;
	cin >> L >> K >> num;
	len = L - K;
	bool isHave = false;
	for (int i = 0; i <= len; i++)
	{
		if (isPrime(stoll(num.substr(i, K))))
		{
			cout << num.substr(i, K);
			isHave = true;
			break;
		}
	}
	if (!isHave) cout << "404";
	return 0;
}
