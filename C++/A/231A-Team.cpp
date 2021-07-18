#include <iostream>
using namespace std;

int main()
{
    int testCases, counter = 0;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int fisrtNum, secondNum, thirdNum;
        cin >> fisrtNum >> secondNum >> thirdNum;

        if (fisrtNum + secondNum + thirdNum > 1)
        {
            counter++;
        }
    }

    cout << counter;

    return 0;
}
