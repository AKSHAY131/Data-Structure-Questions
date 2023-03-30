#include <iostream>>
#include <climits>
using namespace std;

int max(int arr[], int size)
{
    int max_sum = INT_MIN;
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];

        if (max_sum < sum)
            max_sum = sum;

        if (sum < 0)   
        sum = 0;
    }

    return max_sum ;
}

int main()
{
    int arr[] = {6, -7, 1, 0, 5, -4, 2, -1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = max(arr, size);
    cout<<"The maxium sum in contigoius subarray is -->" <<ans ;
    return 0;
}
