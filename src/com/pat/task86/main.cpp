#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    string res = to_string(A * B);
    reverse(res.begin(), res.end());
    res = to_string(stoi(res));
    int len = res.length();
    for (int i = 0; i <= len; i++)
        cout << res[i];
    return 0;
}
