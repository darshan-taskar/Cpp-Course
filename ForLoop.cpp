#include <iostream>
using namespace std;
int main()
{
    int num, sum, n;
    cin>>n;
    sum = 0;

    for (num = 1; num <= n; num++)
    {
        sum = sum + num;
        }
    cout << sum << endl;
    return 0;
}