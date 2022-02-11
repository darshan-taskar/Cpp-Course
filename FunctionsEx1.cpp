#include <iostream>
using namespace std;
int sum_of_N_numbers(int num)
{
    int sum = num * (num + 1) / 2;
    return sum;
}
int main()
{
    int a;

    cin >> a;
    cout << sum_of_N_numbers(a);

    return 0;
}