#include <iostream>
#include <string>
using namespace std;
int main()
{
    string A;
    int B;
    cin >> A >> B;
    int len = A.length();
    string res = "";
    int tmp = 0;
    for (int i = 0; i < len; i++)
    {
        tmp = 10 * tmp + (A[i] - '0');
        res += to_string(tmp / B);
        tmp %= B;
    }
    int index = 0;
    int resLen = res.length();
    while (index < resLen && res[index] == '0')
        index++;
    if (index != resLen)
        cout << res.substr(index, resLen) << " " << tmp;
    else
        cout << "0 " << A;
    return 0;
}
