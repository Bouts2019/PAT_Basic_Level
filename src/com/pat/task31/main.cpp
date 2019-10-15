#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int weight[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
    char check[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
    int N;
    cin >> N;
    vector<string> incorrectID;
    for (int i = 0; i < N; i++)
    {
        string id;
        cin >> id;
        bool isOK = true;
        int sum = 0;
        for (int j = 0; j < 17; j++)
            if (id[j] >= '0' && id[j] <= '9')
                sum += (id[j] - '0') * weight[j];
            else
            {
                isOK = false;
                break;
            }
        if (isOK)
            if (id[17] != check[sum % 11])
                incorrectID.push_back(id);
            else;
        else
            incorrectID.push_back(id);
    }
    if (incorrectID.size() == 0)
        cout << "All passed";
    else
    {
        int len = incorrectID.size();
        for (int i = 0; i < len; i++)
            if (i != len - 1) cout << incorrectID[i] << endl;
            else cout << incorrectID[i];
    }

    return 0;
}
