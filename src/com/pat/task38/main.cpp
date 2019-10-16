#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    int* arr = new int[100 + 1] { 0 };
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        arr[tmp]++;
    }
    int K;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        int tmp;
        cin >> tmp;
        if (i != 0) cout << " " << arr[tmp];
        else cout << arr[tmp];
    }
    return 0;
}
