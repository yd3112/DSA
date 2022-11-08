#include <iostream>
using namespace std;

int power(int x , int y){
    if(y == 0)
        return 1;
    int temp = power(x , y/2);
    temp = temp * temp;
    if(y % 2 == 0)
        return temp;
    if(y % 2 != 0)
        return temp*x;
}

int main(){
    long long a = power(2 ,1);
    long long b = power(2 ,10);
    long long c = power(2 ,0);
    cout << a << endl << b << endl << c;
    return 0;
}