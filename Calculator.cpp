#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int num1, num2, Addition, Subtraction, Multiplication, Modulus;
        char operation, decision;
        float Division;

        cout << "Enter the First Number" << endl;
        cin >> num1;
        cout << "Enter the Second Number" << endl;
        cin >> num2;

        cout << "Which operation Do you want to perform?" << endl;
        cin >> operation;

        do
        {
            if (operation == '+')
            {
                Addition = num1 + num2;
                cout << "Addition is :" << Addition << endl;
            }
            else if (operation == '-')
            {
                Subtraction = num1 - num2;
                cout << "Subtraction is :" << Subtraction << endl;
            }
            else if (operation == '*')
            {
                Multiplication = num1 * num2;
                cout << "Multiplication is :" << Multiplication << endl;
            }
            else if (operation == '/')
            {
                Division = num1 / num2;
                cout << "Division is :" << Division << endl;
            }
            else if (operation == '%')
            {
                Modulus = num1 % num2;
                cout << "Modulus is :" << Modulus << endl;
            }
            else
            {
                cout << "Invalid Operation" << endl;
            }

            cout << "Do you want to Continue? \n Yes or No (Y/N)" << endl;
            cin >> decision;

        } while (false);
        if (decision == 'y' || decision == 'Y')
        {
            continue;
        }
        break;
    }
    return 0;
}