#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of Array :" << endl;
    cin >> size;
    int array[size];
    cout << "enter elements in array" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}