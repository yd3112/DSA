#include <iostream>
using namespace std;

bool prime(int x)
{
    if (x == 1)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    bool a = prime(13);
    bool b = prime(6);
    cout << a << endl << b;
    return 0;
}