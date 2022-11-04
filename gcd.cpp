#include <iostream>
using namespace std;

int gcd(int x, int y);

int main(){
    int a = gcd(15 , 25);
    cout << a << endl;
    return 0;
}

int gcd(int x, int y){
    if(x == 0){
        return y;
    }
    else{
        return gcd(y % x , x);
    }
}