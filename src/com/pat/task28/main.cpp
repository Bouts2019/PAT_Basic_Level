#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Person
{
public:
    string name;
    int year;
    int month;
    int day;

    static bool isReasonable(Person p)
    {
        if(p.year > 2014 - 200 && p.year < 2014) return true;
        else if (p.year == 2014 - 200)
        {
            if (p.month > 9) return true;
            else if (p.month < 9) return false;
            else return p.day >= 6;
        }
        else if (p.year == 2014)
        {
            if (p.month < 9) return true;
            else if (p.month > 9) return false;
            else return p.day <= 6;
        }
        else return false;
    }

    bool operator<(Person& p) const
    {
        if (this->year > p.year) return true;
        else if (this->year < p.year) return false;
        else
        {
            if (this->month > p.month) return true;
            else if (this->month < p.month) return false;
            else return this->day >= p.day;
        }
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<Person> people;
    for (int i = 0; i < N; i++)
    {
        Person p;
        string text;
        cin >> p.name >> text;
        p.year = stoi(text.substr(0,4));
        p.month = stoi(text.substr(5,7));
        p.day = stoi(text.substr(8, 10));
        if (Person::isReasonable(p))
            people.push_back(p);
    }
    sort(people.begin(), people.end());
    if (people.size() == 0) cout << "0";
    else cout << people.size() << " " << people[people.size() - 1].name << " " << people[0].name;
    return 0;
}
