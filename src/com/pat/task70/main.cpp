#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int* ropes = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
		cin >> ropes[i];
	sort(ropes, ropes + N);
	double len = 0.0;
	for (int i = 0; i < N; i++)
		if (i) len = (len + (double)ropes[i]) / 2;
		else len = (double)ropes[i];
	cout << (int)len;
	return 0;
}
