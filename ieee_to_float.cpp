#include <bits/stdc++.h>
using namespace std;

typedef union
{
    float f;
    struct {
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    }raw;
}myFloat;

unsigned int convertTOInt(unsigned int *arr, int low, int high){
    unsigned int f = 0,i;
    for(i = high; i >= low; i--){
        f= f + arr[i] * pow(2 , high - i);
    }
    return f;
}

int main(){
    myFloat var;
    unsigned int arr[32] = {
        0,
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0 
    };

    unsigned int f = convertTOInt(arr , 9 , 31);
    var.raw.mantissa = f;
    f = convertTOInt(arr, 1 , 8);
    var.raw.exponent = f;
    var.raw.sign = arr[0];

    cout << "IEEE 754 Floating point is:\t" ;
    cout << fixed << setprecision(6) << var.f << endl;
}