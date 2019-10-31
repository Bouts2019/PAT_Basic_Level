#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	double teacherScore;
	double maxStudentScore;
	double minStudentScore;
	double sumScore;
	double num;
	double tmpScore;
	for (int i = 0; i < N; i++)
	{
		cin >> teacherScore;
		maxStudentScore = -1;
		minStudentScore = M + 1;
		sumScore = 0.0;
		num = 0.0;
		for (int j = 0; j < N - 1; j++)
		{
			cin >> tmpScore;
			if (tmpScore >= 0 && tmpScore <= M)
			{
				num++;
				sumScore += tmpScore;
				if (tmpScore > maxStudentScore)
					maxStudentScore = tmpScore;
				if (tmpScore < minStudentScore)
					minStudentScore = tmpScore;
			}
		}
		if (i != 0) cout << endl;
		cout << round((teacherScore + (sumScore - maxStudentScore - minStudentScore) / (num - 2)) / 2);
	}
	return 0;
}
