#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int buyandsell(vector<int> &prices)
{
    int max_profit = 0;
    int min = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < min)
            min = prices[i];

        else
            max_profit = max(max_profit, prices[i] - min);
    }
    return max_profit;
}
int main()
{
    vector<int> v{7, 1, 5, 3, 6, 4};
    int i = buyandsell(v);
    cout << i;
    return 0;
}
