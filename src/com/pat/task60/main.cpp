#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	vector<int> arr;
	int tmp = 0; 
	for (int i = 0; i < N; i++) { cin >> tmp; arr.push_back(tmp); }
	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());
	int max = 0;
	for (int i = 0; i < N; i++)
		if (arr[i] > i + 1)
			max = i + 1;
	cout << max;
	return 0;
}
