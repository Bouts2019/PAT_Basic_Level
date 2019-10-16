#include <iostream>
#include <string>
using namespace std;
int main()              // 本题关键在于每次扫描到中间的A时，总的个数+=左边的P的个数*右边的T的个数，所以读到P要自增1，读到T要自减1；
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    cin >> str;
    int len = str.length();
    int countP = 0;
    int countA = 0;
    int countT = 0;
    int countPAT = 0;
    for (int i = 0; i < len; i++)
        if (str[i] == 'T')
            countT++;
    for (int i = 0; i < len; i++)
        if (str[i] == 'A'){
            countPAT += countP * countT;
            countPAT %= 1000000007;
        }
        else if (str[i] == 'P') countP++;
        else countT--;
    countPAT += countT * countP * countA;
    cout << countPAT % 1000000007;
    return 0;
}
