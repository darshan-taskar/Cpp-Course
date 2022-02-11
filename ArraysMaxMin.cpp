#include <iostream>
#include <limits.h>
using namespace std;
int getMaxValue(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int getMinValue(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cout << "Enter the size of the array :" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the elements in Array :" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int Maximum = getMaxValue(arr, size);
    int Minimum = getMinValue(arr, size);

    cout << "Maximum :" << Maximum << endl;
    cout << "Minimum :" << Minimum << endl;

    return 0;
}