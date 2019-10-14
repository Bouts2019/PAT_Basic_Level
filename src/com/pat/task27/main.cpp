#include <iostream>
using namespace std;
int main()
{
    int N;
    char c;
    cin >> N >> c;
    int used = 0;
    int max = 1;
    while (used + (max == 1 ? 1 : max * 2) < N)
    {
        used += max == 1 ? 1 : max * 2;
        max += 2;
    }
    if (max != 1) max -= 2;           // 长度处理；
    if (max == 1 && N == 1) used = 1; // 特殊处理；
    for (int i = max; i >= 3; i -= 2)
    {
        for (int j = 0; j < (max - i) / 2; j++) cout << ' ';
        for (int j = 0; j < i; j++) cout << c;
        cout << endl;
    }
    for (int i = 1; i <= max; i += 2)
    {
        for (int j = 0; j < (max - i) / 2; j++) cout << ' ';
        for (int j = 0; j < i; j++) cout << c;
        cout << endl;
    }
    cout << N - used;
    return 0;
}
