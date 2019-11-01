#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	string id;
	int distance;
};

int main()
{
	int N;
	cin >> N;
	Person longestPerson;
	longestPerson.distance = -1;
	Person shortestPerson;
	shortestPerson.distance = 100000;
	for (int i = 0; i < N; i++)
	{
		string id; int x, y;
		cin >> id >> x >> y;
		int dis = x * x + y * y;
		if (dis >= longestPerson.distance)
		{
			longestPerson.id = id;
			longestPerson.distance = dis;
		}
		if (dis <= shortestPerson.distance)
		{
			shortestPerson.id = id;
			shortestPerson.distance = dis;
		}
	}
	cout << shortestPerson.id << " " << longestPerson.id;
	return 0;
}
