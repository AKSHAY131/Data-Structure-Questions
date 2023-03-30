#include<iostream>
using namespace std ;

// swap is already being pre written type in this 

/*void swap(int*p , int *q)
{
    int temp ;
    temp = *q; 
    *q = *p ; 
    *p = temp ;
}
*/
void negelement(int arr[], int size )
{
   int low = 0 ;
   int mid = 0 ;
    
    while (mid <=size)
    {
    if (arr[mid]>=0)
      mid ++ ;

    else
       swap(arr[low++], arr[mid++]);   
    }        
}

int main ()
{
    int arr[] = {-5 , 3 , 1 , -2 , -1 , 0 , -9, 6 ,-8};
    int size = sizeof (arr) / sizeof (arr[0]);

    negelement(arr , size );

    for(int i = 0 ; i <size ; i++)
        cout << arr[i] <<endl;
    return  0 ;
}