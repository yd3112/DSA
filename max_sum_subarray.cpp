#include <iostream>
using namespace std;

int max_sum(int a[] , int n){
    int lmax = a[0], res = a[0];
    for(int i = 1; i < n; i++){
        lmax = max(lmax + a[i] , a[i]);
        res = max(res , lmax);
    }
    return res;
}

int main(){
    int a[] = {5,-3,8,9,-6,2};
    cout << max_sum(a , 6);
    return 0;
}