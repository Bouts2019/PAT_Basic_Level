#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    long A, B, C;
    int D;
    cin >> A >> B >> D;
    C = A + B;
    if (C == 0)               // 加入判断，如果不判断输出为空，会显示错误；
    {
        cout << "0";
        return 0;
    }
    string res = "";
    while (C != 0)
    {
        res += to_string(C % D);
        C = C / D;
    }
    reverse(res.begin(), res.end());
    cout << res;
}
