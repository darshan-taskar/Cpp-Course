#include <iostream>
using namespace std;
void PrintArray(int arr[], int n)
{

    cout << "Displaying the elements" << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << endl;
    }
    return;
}
int main()
{
    int size;
    cout << "Enter the size of Array" << endl;
    cin >> size;
    cout << "Enter Elements in Array" << endl;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    PrintArray(arr, size);

    return 0;
}