#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N = 0;
    int* scores;
    cin >> N;
    scores = new int[N + 1] { 0 };
    int max_len = 0;
    int max_index = 0;
    int max_score = 0;
    for (int i = 0; i < N; i++)
    {
        int number = 0;
        int score = 0;
        cin >> number >> score;
        if (scores[number] == 0)
            if (number > max_len)
                max_len = number;
        scores[number] += score;
    }
    for (int i = 1; i <= max_len; i++)
        if (scores[i] > max_score)
        {
            max_score = scores[i];
            max_index = i;
        }
    cout << max_index << " " << max_score;
 
    return 0;
}
