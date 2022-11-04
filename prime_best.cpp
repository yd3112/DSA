#include <iostream>
using namespace std;

bool prime(int x)
{
    if (x == 1)
        return false;
    if (x == 2 || x == 3 || x == 5)
        return true;

    if(x % 2 !=0 && x % 3 != 0 && x % 5 != 0){
        for(int i = 7; i * i <= x; i = i + 30){
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
    bool a = prime(89);
    bool b = prime(6);
    cout << a << endl << b;
    return 0;
}