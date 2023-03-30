#include <iostream >
#include <algorithm>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void merge(int arr1[], int arr2[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);
            int element = arr2[0];
            int k ;
            for ( k = 1 ; k < m && arr2[k] < element  ; k++ )
            {
                arr2[k-1]= arr2[k];
                
            }
            arr2[k-1] = element ; 

        }
        
    }
}
int main()
{
    int arr1[] = {1, 4, 8, 10};
    int arr2[] = {0, 3, 7, 9};

    int size_1 = sizeof(arr1) / sizeof(arr1[0]);
    int size_2 = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1, arr2, size_1, size_2);
    print(arr1, size_1);
    print(arr2, size_2);
    return 0;
}