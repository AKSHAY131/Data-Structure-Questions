#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin>>n ;

    int reverseDigit = 0 ;

    while(n>0)
    {
        int LastDigit =n % 10 ;
        reverseDigit = reverseDigit * 10 +LastDigit;
        n = n/10;
    }
    cout<< reverseDigit;
    return 0 ;
}
