#include <iostream>
using namespace std;

// same logic can be applied for rotating the array different side 

void rotate(int arr[],  int size)
{
    int temp = arr[size-1] , i ;

    for (int i = size-1 ; i >0 ; i--)
      arr[i] = arr[i-1];
      arr[0] =  temp ;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "The original array is ";
     for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
        cout << endl ;

    rotate(arr, size);
    
    cout << "The rotated array is " ;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " "; 
}