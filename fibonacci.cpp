#include <iostream>
using namespace std;

int fun(int x){
    if(x == 1 || x == 2)
        return 1;
    return fun(x-2) + fun(x-1);
}

int main(){
    cout << fun(1) << endl;
    cout << fun(2) << endl;
    return 0;
}