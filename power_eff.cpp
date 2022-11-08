#include <iostream>
using namespace std;

int power(int x , int y){
    int res = 1;
    int temp = x;
    while (y > 0)
    {
        if( y & 1){
            res = res * temp;
        }
        temp = temp * temp;
        y = y >> 1;
    }
    return res;
}

int main(){
    int a = power(2 ,1);
    int b = power(3 ,5);
    int c = power(2 ,0);
    cout << a << endl << b << endl << c;
    return 0;
}