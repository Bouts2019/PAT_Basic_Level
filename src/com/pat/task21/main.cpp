#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string num;
    cin >> num;
    int times[10] = { 0 };
    int len = num.length();
    for (int i = 0; i < len; i++)
        times[num[i] - '0']++;
    bool hasPrinted = false;
    for (int i = 0; i < 10; i++)
        if (times[i] != 0)
        {
            if (hasPrinted) cout << endl;
            cout << i << ":" << times[i];
            hasPrinted = true;
        }
}
