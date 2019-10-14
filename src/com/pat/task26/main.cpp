#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int t1, t2;
    cin >> t1 >> t2;
    int diff = t2 - t1;
    diff = int(round((double)diff / 100.0));
    int sec = diff % 60;
    diff /= 60;
    int min = diff % 60;
    diff /= 60;
    int hour = diff % 60;
    cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec;
    return 0;
}
