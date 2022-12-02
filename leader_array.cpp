#include <iostream>
using namespace std;

void leader(int a[] , int n){
    int leader = INT32_MIN;
    for(int i = n -1; i >= 0; i--){
        if(a[i] > leader){
            leader = a[i];
            cout << leader << " ";
        }
    }
}

int main(){
    int a[] = {7,10,4,10,6,5,2};
    leader(a , 7);
    return 0;
}