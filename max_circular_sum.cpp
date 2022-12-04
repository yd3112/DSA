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

int max_circular(int a[], int n){
    int max_normal , sum =0;
    max_normal = max_sum(a , n);
    if(max_normal < 0){
        return max_normal;
    }
    for(int i = 0; i < n; i++){
        sum += a[i];
        a[i] = -a[i];
    }
    int max_cir = sum + max_sum(a , n);
    return max(max_normal , max_cir);
}

int main(){
     int a[] = {8,-4,3,-5,4};
     cout << max_circular(a , 5);
     return 0;
}