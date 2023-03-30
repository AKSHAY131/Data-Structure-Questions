#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int k = 1;
        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << k;
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}