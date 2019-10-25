#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
class Candidate
{
public:
    string id;
    int testId;
    int examId;
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    int N = 0;
    int M = 0;
    cin >> N;
    vector<Candidate> candidates;
    for (int i = 0; i < N; i++)
    {
        string id;
        int testId;
        int examId;
        Candidate candidate;
        cin >> candidate.id >> candidate.testId >> candidate.examId;
        candidates.push_back(candidate);
    }
    cin >> M;
    int* testIDs = (int*)malloc(sizeof(int) * M);
    for (int i = 0; i < M; i++)
        cin >> testIDs[i];
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (candidates[j].testId == testIDs[i])
            {
                cout << candidates[j].id << " " << candidates[j].examId;
                if (i != M - 1) cout << endl;
            }
    return 0;
}
