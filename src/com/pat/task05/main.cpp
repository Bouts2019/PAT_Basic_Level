#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int K = 0;
    cin >> K;
    vector<int> arr;
    int flagArr[10000] = { 0 };
    for (int i = 0; i < K; ++i)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
        while (tmp != 1)
            if ((tmp & 1) == 0)
                flagArr[tmp /= 2] = 1;
            else
                flagArr[tmp = (tmp * 3 + 1) / 2] = 1;
    }

    std::sort(arr.begin(), arr.end(), std::greater<int>());

    bool hasPrinted = false;
    for (int i = 0; i < K; ++i)
    {
        if (flagArr[arr[i]] == 0)
        {
            if (hasPrinted) cout << " " << arr[i];
            else
            {
                cout << arr[i];
                hasPrinted = true;
            }
        }
    }

    return 0;
}
