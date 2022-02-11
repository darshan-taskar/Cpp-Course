#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the rows :" << endl;
    cin >> rows;
    cout << "Enter the columns :" << endl;
    cin >> cols;

    cout << "Enter the Elements in array:" << endl;
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "-------------------------------------------------------------" << endl;
    cout << "Displaying the array" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}