#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int key;
    int odd[5] = {2, 4, 6, 8, 10};
    int even[6] = {2, 4, 6, 8, 10, 12};
    cout << "enter the key do you want to search " << endl;
    cin >> key;

    int oddIndex = binarySearch(odd, 5, key);
    cout << "oddIndex is :" << oddIndex << endl;

    int evenIndex = binarySearch(even, 6, key);
    cout << "evenIndex is :" << evenIndex << endl;

    return 0;
}