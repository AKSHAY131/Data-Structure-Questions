#include <iostream>
#include <unordered_map>
using namespace std;

int pairs(int arr[], int size, int sum)
{
    unordered_map<int, int> m;
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        int rem_val = sum - arr[i];
        if (m[rem_val])
        {
            ans = ans + m[rem_val];
        }

        m[arr[i]]++;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 2;

    int ans = pairs(arr, size, sum);
    cout << "The number of pairs are -->" << ans;
    return 0;
}