#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int N = 0;
	vector<string> nums;
	vector<int> friendNums;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		nums.push_back(str);
	}
	vector<int>::iterator it;
	for (int i = 0; i < N; i++)
	{
		int len = nums[i].length();
		int sum = 0;
		for (int j = 0; j < len; j++)
		{
			sum += nums[i][j] - '0';
		}
		it = find(friendNums.begin(), friendNums.end(), sum);
		if (it == friendNums.end())
			friendNums.push_back(sum);
	}
	sort(friendNums.begin(), friendNums.end());
	int len = friendNums.size();
	bool isFirst = true;
    cout << len << endl;
	for (int i = 0; i < len; i++)
	{
		if (!isFirst) cout << " ";
		cout << friendNums[i];
		isFirst = false;
	}
	return 0;
}
