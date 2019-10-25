#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N = 0;
	cin >> N;
	int* arr = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	int* minArr = (int*)malloc(sizeof(int) * N);
	int minNum = arr[N - 1];
	for (int i = N - 1; i >= 0; i--)
	{
		if(arr[i] < minNum) minNum = arr[i];
		minArr[i] = minNum;
	}
	int maxNum = arr[0];
	vector<int> maybe;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] >= maxNum) maxNum = arr[i];
		if (arr[i] >= maxNum && arr[i] <= minArr[i])
		maybe.push_back(arr[i]);
	}
	sort(maybe.begin(), maybe.end());
	int len = maybe.size();
	cout << len << endl;
	for (int i = 0; i < len; i++)
	{	
		cout << maybe[i];
		if (i != len - 1)
			cout << " ";
	}		
	if (len == 0) cout << endl;
	return 0;
}
