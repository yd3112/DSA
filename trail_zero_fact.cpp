#include <iostream>
using namespace std;

int trailing_zero(int x){
    int res = 0;
    for(int i = 5; i <= x; i = i*5){
        res += x/i;
    }
    return res;
}

int main(){
    int a = trailing_zero(25);
    cout << a << endl;
    return 0;
}