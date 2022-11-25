#include <iostream>
using namespace std;

int odd_occur(int a[] , int n){
    int res = a[0] ^ 0;
    for(int i = 1; i < n; i++){
        res = res ^ a[i];
    }
    return res;
}

int main(){
    int a[] = {1 , 2 , 3, 4,1,3 ,4};
    cout << odd_occur(a , 7);
    return 0;
}