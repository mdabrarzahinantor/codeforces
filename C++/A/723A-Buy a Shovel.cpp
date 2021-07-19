#include <iostream>
using namespace std;

int main()
{
    int shovelPrice, extraBurles, i = 1;
    cin >> shovelPrice >> extraBurles;

    while (true)
    {
        if ((shovelPrice * i) % 10 == 0 || ((shovelPrice * i) - extraBurles) % 10 == 0)
        {
            break;
        }
        else
        {
            i++;
        }
    }

    cout << i;

    return 0;
}
