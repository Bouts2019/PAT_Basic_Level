#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int N = 0;
    cin >> N;
    if (N == 6174) {
        cout << "7641 - 1467 = 6174";
        return 0;
    }
    while (N != 6174)
    {
        vector<int> nums;
        int tmp = 1;
        for (int i = 0; i < 4; ++i, tmp *= 10)
            nums.push_back(N / tmp % 10);

        int l = 0;
        int r = 0;

        std::sort(nums.begin(), nums.end());
        tmp = 1000;
        for (int i = 0; i < 4; i++, tmp /= 10)
        {
            l += (1000 / tmp) * nums[i];
            r += tmp * nums[i];
        }

        if (l == r) {
            cout << std::setfill('0') << std::setw(4) << N << " - " << std::setfill('0') << std::setw(4) << N << " = 0000";
            break;
        }
        printf("%04d - %04d = %04d\n", l , r, l - r);

        N = l - r;
    }

    return 0;
}
