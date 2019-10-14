#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Person {
public:
    int Jwin;
    int Cwin;
    int Bwin;

    Person() {
        Jwin = 0;
        Cwin = 0;
        Bwin = 0;
    }

    int totalWin() {
        return this->Jwin + this->Cwin + this->Bwin;
    }


};

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int N = 0;
    while (cin >> N) {
        Person A;
        Person B;
        for (int i = 0; i < N; ++i) {
            char l = 0;
            char r = 0;
            cin >> l >> r;
            if ((l == 'J') && (r == 'B')) A.Jwin++;
            else if ((l == 'B') && (r == 'C')) A.Bwin++;
            else if ((l == 'C') && (r == 'J')) A.Cwin++;
            else if ((l == 'B') && (r == 'J')) B.Jwin++;
            else if ((l == 'C') && (r == 'B')) B.Bwin++;
            else if ((l == 'J') && (r == 'C')) B.Cwin++;
        }

        int dogfall = N - (A.totalWin() + B.totalWin());
        cout << A.totalWin() << " " << dogfall << " " << (N - dogfall - A.totalWin()) << endl;
        cout << B.totalWin() << " " << dogfall << " " << (N - dogfall - B.totalWin()) << endl;

        if (A.Bwin >= A.Cwin && A.Bwin >= A.Jwin)
            cout << "B";
        else if (A.Cwin >= A.Bwin && A.Cwin >= A.Jwin)
            cout << "C";
        else
            cout << "J";

        cout << " ";

        if (B.Bwin >= B.Cwin && B.Bwin >= B.Jwin)
            cout << "B";
        else if (B.Cwin >= B.Bwin && B.Cwin >= B.Jwin)
            cout << "C";
        else
            cout << "J";

        return 0;
    }
    return 0;
}
