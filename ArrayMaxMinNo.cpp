#include <iostream>
#include <climits>
using namespace std;
int main()
{
    cout << "Enter the size array :" << endl;
    int n;
    cin >> n;
    int array[n];
    cout << "Enter elements in array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);
    }

    cout << "Maximum No is :" << maxNo << " "
         << "Minimum No is :" << minNo << endl;

    return 0;
}