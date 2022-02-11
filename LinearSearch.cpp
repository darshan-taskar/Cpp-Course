#include <iostream>
using namespace std;
int LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "element is found at location  = ";
            return i;
        }
    }

     cout<<"element not found"<<endl;
    return 0;
}
int main()
{
    int n, key;
    cout << "Enter the elements do you want in array " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter which elment do you want to search " << endl;
    cin >> key;

    cout << LinearSearch(arr, n, key);

    return 0;
}