#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int asciiTable[128] = { 0 };
    int len = 0;
    string brokenKey;
    string input;

    getline(cin, brokenKey);        // Not "cin >> brokenKey;"；
    len = brokenKey.length();
    for (int i = 0; i < len; i++)
        if (brokenKey[i] != '+')
            if (brokenKey[i] >= 'A' && brokenKey[i] <= 'Z')
            {
                asciiTable[brokenKey[i]] = 1;
                asciiTable[brokenKey[i] + 'a' - 'A'] = 1;
            }
            else asciiTable[brokenKey[i]] = 1;
        else for (int j = 0; j < 26; j++) asciiTable['A' + j] = 1;
    getline(cin, input);
    len = input.length();
    for (int i = 0; i < len; i++)
        if (!asciiTable[input[i]])
            cout << input[i];

    return 0;
}
