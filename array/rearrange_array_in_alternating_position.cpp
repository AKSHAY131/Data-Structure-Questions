#include <iostream>
using namespace std;
void right_rotate(int arr[], int start, int end)
{
    int temp = arr[end];
    for (int i = end; i > start ; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[start] = temp;
}
void rearrange(int arr[], int size)
{
    int wrong_index = -1;
    for (int i = 0; i < size; i++)
    {
        if (wrong_index != -1)
        {
            if ((arr[wrong_index] >= 0 and arr[i] < 0) or (arr[wrong_index] < 0 and arr[i] >= 0))
            {
                right_rotate(arr, wrong_index, i);

                if (i - wrong_index >= 2)
                    wrong_index += 2;

                else
                    wrong_index = -1;
            }
        }
        else
        {
            if ((arr[i] > 0 and i % 2 == 0) or (arr[i] < 0 and i % 2 == 1))
                wrong_index = i;
        }
    }
}
int main()
{
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int size = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
