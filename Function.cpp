#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int sub(int num1, int num2)
{
    int subtract = num1 - num2;
    return subtract;
}
int sqrt(int num)
{
    int sqr = num * num;
    return sqr;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    cout << sub(a, b) << endl;
    cout << sqrt(a) << endl;

    return 0;
}