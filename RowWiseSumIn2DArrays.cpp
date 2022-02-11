#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows" << endl;
    cin >> rows;
    cout << "Enter the number of columns" << endl;
    cin >> cols;

    int arr[rows][cols];
    cout << "Enter elements of the array" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "--------------------------------------------------------------------" << endl;
    cout << "Displaying array elements" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "---------------------------------------------------------------------" << endl;
    cout << "Row wise Sum is " << endl;

    int SumOfRows = 0;
    for (int i = 0; i < rows; i++)
    {
        SumOfRows = arr[i] + SumOfRows;
    }
    cout << endl;

    return 0;
}