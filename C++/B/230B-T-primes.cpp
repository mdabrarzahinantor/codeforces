#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int primeNumbers[1000000] = {0};

    for (long int i = 2; i <= 1000000; i++)
    {

        if (primeNumbers[i] == 0)
        {
            for (long int j = 2; i * j <= 1000000; j++)
            {

                primeNumbers[i * j] = 1;
            }
        }
    }

    long int number;
    cin >> number;

    for (long int i = 0; i < number; i++)
    {
        long long int input;
        cin >> input;
        if (sqrt(input) == (long long int)sqrt(input) && sqrt(input) > 1)
        {
            if (primeNumbers[(long long int)sqrt(input)] == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
