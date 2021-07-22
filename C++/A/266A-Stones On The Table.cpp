#include <iostream>
using namespace std;

int main()
{
    int input, counter = 0;
    string string;
    cin >> input >> string;

    for (int i = 0; i < input; i++)
    {
        if (string[i] == string[i - 1])
        {
            counter++;
        }
    }

    cout << counter;

    return 0;
}