#include <iostream>
using namespace std;

int gcd(int x , int y){
    while(x != y){
        if(x > y)
            x = x - y;
        else
            y = y -x;
    }
    return x;
}

int main(){
    int a = gcd(10 , 15);
    cout << a << endl;
    return 0;
}