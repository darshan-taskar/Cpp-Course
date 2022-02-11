#include <iostream>
using namespace std;
int Operations(int num1, int num2, char operation)
{
    if (operation == '+')
    {
        int Addition = num1 + num2;
        cout << "Addition is :" << endl;
        return Addition;
    }
    else if (operation == '-')
    {
        int Subtraction = num1 - num2;
        cout << "Subtraction is :" << endl;
        return Subtraction;
    }
    else if (operation == '*')
    {
        int Multiplication = num1 * num2;
        cout << "Multiplication is :" << endl;
        return Multiplication;
    }
    else if (operation == '/')
    {
        int Division = num1 / num2;
        cout << "Division is :" << endl;
        return Division;
    }
    else if (operation == '%')
    {
        int Modulus = num1 % num2;
        cout << "Modulus is :" << endl;
        return Modulus;
    }
    else
    {
        cout << "Invalid Operation" << endl;
        return 0;
    }
}
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
            cout << Operations(num1, num2, operation) << endl;
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