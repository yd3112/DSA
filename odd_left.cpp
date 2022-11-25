#include <iostream>
using namespace std;

int leftover(int a[], int n){
    int res = 0;
    for(int i =0; i < n; i++)
        res = res ^ a[i];
    for(int i = 1; i <= n+1; i++)
        res = res ^ i;
    return res;
}

int main(){
    int a[] = {1,2,3,4,5,7};
    cout << leftover(a , 6) << endl;
}