#include <iostream>
#include <string>
using namespace std;
int main()
{
    string have;
    string want;
    int ascii[128] = { 0 };
    cin >> have >> want;
    int haveLen = have.length();
    for (int i = 0; i < haveLen; i++)
        ascii[(int)have[i]]++;
    int lack = 0;
    int wantLen = want.length();
    for (int i = 0; i < wantLen; i++)
        if (ascii[(int)want[i]] == 0) lack++;
        else ascii[(int)want[i]]--;
    if (lack == 0)
        cout << "Yes " << haveLen - wantLen;
    else
        cout << "No " << lack;
    return 0;
}
