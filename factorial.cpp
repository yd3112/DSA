#include <iostream>
using namespace std;

int factorial(int x){
    int res = 1;
    for(int i = 2; i <= x ; i++){
        res = res * i;
    }
    return res;
}

int main(){
    int a = factorial(5);
    cout << a << endl;
    return 0;
}