#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long N, p;
    cin >> N >> p;
    long* arr = new long[N];
    for (long i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    int max = 0;
    for (int i = 0; i < N; i++)
        for (int j = i; j < N; j++)
            if (arr[i] * p < arr[j]) max = (j - i) > max ? j - i : max;
    cout << max;
    delete[](arr);
    return 0;
}
