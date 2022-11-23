#include <bits/stdc++.h>
using namespace std;

void printbinary(int n , int i){
    int k = i -1;
    for(k = i-1; k >= 0; k--){
        if((n >> k) & 1)
            cout << "1";
        else
            cout << "0";
    }
}

typedef union
{
    float f;
    struct {
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    }raw;
}myFloat;

void ieee(myFloat var){
    cout << var.raw.sign << " | ";
    printbinary(var.raw.exponent, 8);
    cout << " | ";
    printbinary(var.raw.mantissa, 23);
    cout << " | ";
}


int main(){
    myFloat var;
    cout << "Enter the Float Number" << endl;
    cin >> var.f;
    cout << "IEEE 754 formate of:";
    cout << fixed << setprecision(6) << var.f << "is" <<endl;
    ieee(var);
}