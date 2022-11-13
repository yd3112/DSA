#include <iostream>
using namespace std;

bool set_bit(int num, int k){
    if(num & (1 << k-1))
        return true;
    else
        return false;
}

int main(){
    bool x = set_bit(5 , 2);
    cout << x << endl;
    return 0;
}