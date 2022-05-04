#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
static bool compare(int a, int b)
{
    return a <= b;
}

int coinChange(vector<int> &coins, int amount)
{
    int count = 0;
    int use[+10000000];

    int n = coins.size();
    if (amount == 0)
    {
        return 0;
    }

    for (int i = 0; i < coins.size(); i++)
    {
        use[i] = coins[i];
    }
    sort(use, use + n);
    if (amount <= 0)
    {
        return -1;
    }
    if (coins.size() == 1 && coins[0] != amount)
    {
        if (coins[0] < amount && amount % coins[0] == 0)
        {
            return amount / coins[0];
        }
        else
        {
            return -1;
        }
    }
    else if (coins.size() == 1 && coins[0] == amount)
    {
        return 1;
    }

    while (amount > 0)
    {
        int low1 = lower_bound(use, use + n, amount, compare) - use - 1;

        int m = use[low1];

        amount = amount - m;
        count++;
    }

    return count;
}

int main()
{
    // take input of array
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int amount;
    cin >> amount;
    cout << coinChange(coins, amount) << endl;

    return 0;
}