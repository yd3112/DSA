#include <iostream>
using namespace std;

bool prime(int x)
{
    if (x == 1)
        return false;
    if (x == 2)
        return true;
    if (x == 3)
        return true;

    if(x % 2 !=0 && x % 3 != 0){
        for(int i = 5; i * i <= x; i = i + 6){
            if(x % i == 0)
                return false;
        }
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    bool a = prime(13);
    bool b = prime(6);
    cout << a << endl << b;
    return 0;
}