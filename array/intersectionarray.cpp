#include <iostream>
using namespace std;

void inter(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
            j++;

        else if (arr1[i] < arr2[j])
            i++;

        else
        {  
            cout << arr1[i++] <<endl;
            j++;
        }
    }
}

int main()
{
    int arr1[] = {2, 25, 47, 55, 110, 150};
    int arr2[] = {1, 2, 35, 47, 49, 110};

    int size_1 = sizeof(arr1) / sizeof(arr1[0]);
    int size_2 = sizeof(arr2) / sizeof(arr2[0]);

    inter(arr1, arr2, size_1, size_2);
    return 0;
}