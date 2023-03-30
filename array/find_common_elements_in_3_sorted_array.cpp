#include <iostream>
#include <vector>
using namespace std;

vector<int> common_elements(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3)
{
    int i = 0;
    int j = 0;
    int k = 0;

    vector<int> ans;

    while (i < size1 and j < size2 and k < size3)
    {
        if (arr1[i] == arr2[j] == arr3[k])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
            k++;
        }

        else if (arr1[i] < arr2[j])
            i++;

        else if (arr2[j] < arr3[k])
            j++;

        else
            k++;

        int xx = arr1[i - 1];
        while (arr1[i] == xx)
            i++;

        int yy = arr2[j - 1];
        while (arr2[j] == yy)
            j++;

        int zz = arr3[k - 1];
        while (arr3[k] == zz)
            k++;
    }

    return ans;
}
int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = 6;
    int n2 = 5;
    int n3 = 8;
    vector<int> v = common_elements(arr1, arr2, arr3, n1, n2, n3);

    if (v.size() == 0)
        cout << "Here no element is common";

    for (int i = 0; i < v.size(); i++)
        cout << v[i];

    return 0;
}