#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    char c;
    cin >> N >> c;
    int line = round(N / 2.0);
    for (int i = 0; i < line; i++)
        if (i == 0 || i == line - 1)
        {
            for (int i = 0; i < N; i++) cout << c;
            if (i != line - 1) cout << endl;
        }
        else
        {
            cout << c;
            for (int i = 0; i < N - 2; i++) cout << " ";
            cout << c << endl;
        }
    return 0;
}
