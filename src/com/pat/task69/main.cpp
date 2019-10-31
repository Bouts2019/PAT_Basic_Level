#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int M, N, S;
	vector<string> allPeople;
	map<string, bool> winners;
	cin >> M >> N >> S;
	for (int i = 0; i < M; i++)
	{
		string person;
		cin >> person;
		allPeople.push_back(person);
	}
	bool hadWinner = false;
	for (int i = S - 1; i < M; i += N)
	{
		if (!winners[allPeople[i]])
		{
			winners[allPeople[i]] = true;
			if (hadWinner) cout << endl;
			cout << allPeople[i];
			hadWinner = true;
		}
		else
			i = i - N + 1;
	}
	if (!hadWinner) cout << "Keep going...";
	return 0;
}
