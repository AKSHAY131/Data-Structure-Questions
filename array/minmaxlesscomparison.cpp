#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};
struct Pair getminmax(int arr[], int size)
{
    struct Pair minmax;
    int i = 0;
    if (size % 2 == 0)
    {
        if (arr[i] > arr[i + 1])
        {
            minmax.max = arr[i];
            minmax.min = arr[i + 1];
        }
        else

        {
            minmax.max = arr[i + 1];
            minmax.min = arr[i];
        }

        i = 2;
    }
    else
    {
        minmax.min = arr[i];
        minmax.max = arr[i];

        i = 1;
    }

    while (i < size - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > minmax.max)
            {
                minmax.max = arr[i];
            }

            if (arr[i + 1] < minmax.min)
            {
                minmax.min = arr[i + 1];
            }
        }
        else
        {
            if (arr[i + 1] > minmax.max)
            {
                minmax.max = arr[i + 1];
            }
            if (arr[i] < minmax.min)
            {
                minmax.min = arr[i];
            }

            i = i + 2;
        }
    }
    return minmax;
}
int main()
{
    int arr[8] = {1000, 5, 20, 45, 200, 600, 1, 99};
    int size = 8;
    struct Pair ans = getminmax(arr, size);

    cout << "The maximum element is " << ans.max << endl;
    cout << "The minimum element is " << ans.min << endl;

    return 0;
}