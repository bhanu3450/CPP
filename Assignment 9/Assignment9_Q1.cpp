#include <iostream>
using namespace std;

int facctorial1()
{
    int n;
    int factorial;

    cout << "Enter a positive integer" << endl;
    cin >> n;

    if (n < 0)
        throw 3;

    for (int i = 0; i < n; i++)
    {
        factorial = factorial * i;
    }

    cout << "Factorial of a no is: " << factorial;

    return factorial;
};

int main()
{
    try
    {
        facctorial1();
    }
    catch (int error)
    {
        cout << "Factorial can't be calculated as number is negative" << endl;
    }
    cout << "succesfull execution" << endl;
}