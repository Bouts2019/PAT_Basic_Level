#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Team
{
public:
	int id;
	int score;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	int n = 0;
	cin >> n;
	vector<Team> teams;
	bool isinvec = false;
	int len = 0;
	for (int i = 0; i < n; i++)
	{
		isinvec = false;
		string id_memid;
		int score;
		cin >> id_memid >> score;
		int id = stoi(id_memid.substr(0, id_memid.find('-')));
		for (int i = 0; i < len; i++)
			if (teams[i].id == id)
			{
				isinvec = true;
				teams[i].score += score;
			}
		if (!isinvec)
		{			
			Team team;
			team.id = id;
			team.score = score;
			teams.push_back(team);
			len++;
		}
	}
	Team max;
	max.id = teams[0].id;
	max.score = teams[0].score;
	for (int i = 0; i < len; i++)
		if (teams[i].score > max.score)
		{
			max.id = teams[i].id;
			max.score = teams[i].score;
		}
	cout << max.id << " " << max.score;
	return 0;
}
