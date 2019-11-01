#include <iostream>
using namespace std;
int res[20000] = { 0 };
int main()
{
    double N;
    cin >> N;
    for (double i = 1; (int)i <= N; i++)
        res[(int)(i / 2.0) + (int)(i / 3.0) + (int)(i / 5.0)]++;
    int num = 0;
    for (int i = 0; i < 20000; i++)
        if (res[i])
            num++;
    cout << num;
    return 0;
}
