#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Student
{
public:
    string No;
    int morals;
    int talent;

    friend std::ostream& operator<<(std::ostream& out, const Student& stu)
    {
        out << stu.No << " " << stu.morals << " " << stu.talent;
        return out;
    }

    bool operator>(const Student& stu) const
    {
        int score = (this->morals + this->talent) - (stu.morals + stu.talent);
        if (score != 0) return score > 0;
        score = this->morals - stu.morals;
        if (score != 0) return score > 0;
        score = std::stoi(this->No) - std::stoi(stu.No);
        return -score > 0;
    }

    bool operator<(const Student& stu) const
    {
        int score = (this->morals + this->talent) - (stu.morals + stu.talent);
        if (score != 0) return -score > 0;
        score = this->morals - stu.morals;
        if (score != 0) return -score > 0;
        score = std::stoi(this->No) - std::stoi(stu.No);
        return score > 0;
    }
};

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);

    int N = 0;
    int L = 0;
    int H = 0;
    vector<Student> No1Stus;
    vector<Student> No2Stus;
    vector<Student> No3Stus;
    vector<Student> No4Stus;

    cin >> N >> L >> H;

    for (int i = 0; i < N; ++i) {
        Student newOne;
        cin >> newOne.No >> newOne.morals >> newOne.talent;
        if (newOne.morals >= L && newOne.talent >= L) {
            if (newOne.morals >= H && newOne.talent >= H) {
                No1Stus.push_back(newOne);
            } else if (newOne.talent < H && newOne.morals >= H) {
                No2Stus.push_back(newOne);
            } else if (newOne.morals >= newOne.talent) {
                No3Stus.push_back(newOne);
            } else {
                No4Stus.push_back(newOne);
            }
        } else {
            continue;
        }
    }

    std::sort(No1Stus.begin(), No1Stus.end(), std::greater<Student>());
    std::sort(No2Stus.begin(), No2Stus.end(), std::greater<Student>());
    std::sort(No3Stus.begin(), No3Stus.end(), std::greater<Student>());
    std::sort(No4Stus.begin(), No4Stus.end(), std::greater<Student>());

    int No1Size = No1Stus.size();
    int No2Size = No2Stus.size();
    int No3Size = No3Stus.size();
    int No4Size = No4Stus.size();

    cout << No1Size + No2Size + No3Size + No4Size << endl;

    for (int i = 0; i < No1Size; ++i)
        cout << No1Stus[i] << endl;
    for (int i = 0; i < No2Size; ++i)
        cout << No2Stus[i] << endl;
    for (int i = 0; i < No3Size; ++i)
        cout << No3Stus[i] << endl;
    for (int i = 0; i < No4Size; ++i)
    {
        cout << No4Stus[i];
        if (i != No4Size - 1)
            cout << endl;
    }

        return 0;

}
