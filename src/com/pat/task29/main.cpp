#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    vector<char> brokenKey;
    int len = str1.length();
    int index = 0;
    for (int i = 0; i < len; i++)
        if(str1[i] == str2[index]) index++;
        else
        {
            char c = (str1[i] >= 'a' && str1[i] <= 'z') ? (char)(str1[i] - ('a' - 'A')) : (char)str1[i];
            if (find(brokenKey.begin(), brokenKey.end(), c) == brokenKey.end())
                brokenKey.push_back(c);
        }
    len = brokenKey.size();
    for (int i = 0; i < len; i++)
        cout << brokenKey[i];

}
