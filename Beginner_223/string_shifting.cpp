#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;

    if ((X >= 100) && (X <= 1000))
    {
        if (X % 100 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}