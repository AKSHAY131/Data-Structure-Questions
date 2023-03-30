// It is variant of dutch national flag problem  (dnf)

#include <iostream>
using namespace std;

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void dnf(int arr[], int size)
{
    int low, high, mid;
    low = 0;
    mid = 0;
    high = size - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
}

int main()
{
    int arr[] = {2, 1, 0, 0, 2, 1, 1, 0, 2, 0 , 0 ,1};
    int size = sizeof(arr) / sizeof arr[0];
    dnf(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i];

    return 0;
}
