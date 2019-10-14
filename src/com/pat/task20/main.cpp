#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

class MoonCake
{
public:
    double inventory;           // This variable's type is double, not int;
    double price;

    bool operator>(const MoonCake& mooncake) const
    {
        if (this->price >= mooncake.price)
            return true;
        else return false;
    }
};

int main()
{
    int N, D;
    cin >> N >> D;
    vector<MoonCake> mooncakes;
    for (int i = 0; i < N; i++)
    {
        MoonCake mooncake;
        cin >> mooncake.inventory;
        mooncakes.push_back(mooncake);
    }
    for (int i = 0; i < N; i++)
    {
        double totalPrice;
        cin >> totalPrice;
        mooncakes[i].price = totalPrice / mooncakes[i].inventory;
    }
    sort(mooncakes.begin(), mooncakes.end(), greater<MoonCake>());
    int index = 0;
    double totalEarnings = 0.0;
    for (int i = 0; i < D; i++)
    {
        totalEarnings += mooncakes[index].price;
        mooncakes[index].inventory--;
        if (mooncakes[index].inventory >= 0.0 && mooncakes[index].inventory < 1.0)
            index++;
    }
    printf("%.2f", totalEarnings);
    return 0;
}
