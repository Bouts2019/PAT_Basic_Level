#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
class School
{
public:
	string name;
	double BScore;
	double AScore;
	double TScore;
	double totalScore;
	double numberOfStudent;

	School()
	{
		name = "";
		BScore = 0.0;
		AScore = 0.0;
		TScore = 0.0;
		totalScore = 0.0;
		numberOfStudent = 0;
	}

	void calcTotal()
	{
		totalScore = (int)(BScore / 1.5 + AScore + TScore * 1.5);
	}

	bool operator<(School s)
	{
		if (this->totalScore < s.totalScore) return false;
		else if (this->totalScore == s.totalScore)
		{
			if (this->numberOfStudent < s.numberOfStudent) return true;
			else if (this->numberOfStudent == s.numberOfStudent)
			{
				return this->name < s.name;
			}
			else return false;
		}
		else return true;
	}
};
map<string, School> schools;
vector<School> schools_vec;
int main()
{
	int N = 0;
	cin >> N;
	string id, name;
	double score;
	for (int i = 0; i < N; i++)
	{
		cin >> id >> score >> name;
		transform(name.begin(), name.end(), name.begin(), ::tolower);
		if (schools.count(name))
		{
			School& s = schools[name];
			if (id[0] == 'A') s.AScore += score;
			else if (id[0] == 'B') s.BScore += score;
			else if (id[0] == 'T') s.TScore += score;
			s.numberOfStudent++;
		}
		else
		{
			School s;
			s.name = name;
			if (id[0] == 'A') s.AScore = score;
			else if (id[0] == 'B') s.BScore = score;
			else if (id[0] == 'T') s.TScore = score;
			s.numberOfStudent = 1;
			schools[name] = s;
		}
	}
	map<string, School>::iterator it = schools.begin();
	while (it != schools.end())
	{
		it->second.calcTotal();
		it++;
	}
	it = schools.begin();
	while (it != schools.end())
	{
		schools_vec.push_back(it->second);
		it++;
	}
	sort(schools_vec.begin(), schools_vec.end());
	int len = schools_vec.size();
	cout << len;
	int rank = 0;
	int lastScore = -1;
	for (int i = 0; i < len; i++)
	{
		cout << endl;
		if (schools_vec[i].totalScore == lastScore) cout << rank;
		else { rank = i + 1; cout << rank; lastScore = schools_vec[i].totalScore; }
		cout << " " << schools_vec[i].name << " " << schools_vec[i].totalScore << " " << schools_vec[i].numberOfStudent;
	}
	return 0;
}
