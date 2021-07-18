#include <iostream>
using namespace std;

int main()
{
    int firstNum, secondNum, kthPlace, counter = 0;
    cin >> firstNum >> secondNum;
    int inputArray[firstNum] = {};

    for (int i = 0; i < firstNum; i++)
    {
        int input;
        cin >> input;
        inputArray[i] = input;

        kthPlace = inputArray[secondNum - 1];
    }

    for (int i = 0; i < firstNum; i++)
    {
        if (inputArray[i] >= kthPlace && kthPlace > 0 && inputArray[i] > 0)
        {
            counter++;
        }
    }

    cout << counter;

    return 0;
}
