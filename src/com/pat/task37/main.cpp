#include <iostream>
#include <string>
using namespace std;
class Currency
{
public:
    int Galleon;
    int Sickle;
    int Knut;

    Currency()
    {
        this->Galleon = 0;
        this->Sickle = 0;
        this->Knut = 0;
    }

    Currency(string str)
    {
        int firstIndex = str.find('.');
        int secondIndex = str.find('.', firstIndex + 1);
        this->Galleon = stoi(str.substr(0,firstIndex));
        this->Sickle = stoi(str.substr(firstIndex + 1, secondIndex));
        this->Knut = stoi(str.substr(secondIndex + 1, str.length()));
    }

    bool operator>(Currency obj)
    {
        if (this->Galleon > obj.Galleon) return true;
        else if (this->Galleon == obj.Galleon)
        {
            if (this->Sickle > obj.Sickle) return true;
            else if (this->Sickle == obj.Sickle) return this->Knut >= obj.Knut;
            else return false;
        }
        else return false;
    }

    Currency operator-(Currency obj)
    {
        int kunt;
        int sickle;
        int galleon;
        if (this->Knut >= obj.Knut) kunt = this->Knut - obj.Knut;
        else
        {
            this->Sickle--;
            kunt = this->Knut + 29 - obj.Knut;
        }
        if (this->Sickle >= obj.Sickle) sickle = this->Sickle - obj.Sickle;
        else
        {
            this->Galleon--;
            sickle = this->Sickle + 17 - obj.Sickle;
        }
        galleon = this->Galleon - obj.Galleon;
        Currency diff;
        diff.Galleon = galleon;
        diff.Sickle = sickle;
        diff.Knut = kunt;
        return diff;
    }

    friend  ostream& operator<<(ostream& out, Currency obj)
    {
        out << obj.Galleon << "." << obj.Sickle << "." << obj.Knut;
        return out;
    }
};

int main()
{
    string should_str;
    string have_str;
    cin >> should_str >> have_str;
    Currency money_should(should_str);
    Currency money_have(have_str);
    if (money_have > money_should)
        cout << money_have - money_should;
    else
        cout << "-" << money_should - money_have;
    return 0;
}
