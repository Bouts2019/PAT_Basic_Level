#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int times[10] = { 0 };
    for (int i = 0; i < 10; i++)
        cin >> times[i];
    vector<int> nums;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < times[i]; j++)
            nums.push_back(i);
    sort(nums.begin(), nums.end());
    int len = nums.size();
    if (nums[0] == 0)
    {
        int i = 0;
        while (nums[++i] == 0);
        nums[0] = nums[i];
        nums[i] = 0;
    }
    for (int i = 0; i < len; i++)
        cout << nums[i];
    return 0;
}
