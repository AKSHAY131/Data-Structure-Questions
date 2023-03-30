#include<iostream>
using namespace std;

void reverseArray(int arr[], int start , int end)
{
    while(start < end)
    {
        int temp ;
        temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp ;
        start ++ ; 
        end--;

    }
}

void printArray(int arr[] , int size )
{
    for (int i = 0 ; i <size ; i++)
        cout << arr[i]  ;
}
int main ()
{
    int arr[5] = {9,8,2,1,5};

    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr , size);
    reverseArray(arr , 0 , size-1);
    printArray(arr , size);
    return 0 ;

}