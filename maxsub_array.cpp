#include <iostream>
using namespace std;

int max_cross_sum(int a [], int low, int mid, int high){
    int left_sum = INT32_MIN , sum = 0;
    for(int i = mid; i >= low; i--){
        sum += a[i];
        if(sum > left_sum)
            left_sum = sum;
    }
    int right_sum = INT32_MIN;
    sum = 0;
    for(int i = mid + 1; i <= high; i++){
        sum += a[i] ;
        if(sum > right_sum)
            right_sum = sum;
    }
    return left_sum + right_sum;
}

int max_sub_arr(int a[], int low, int high){
    if(low == high)
        return a[low];
    int mid = (low + high) /2;
    int leftsum = max_sub_arr(a , low , mid);
    int rightsum = max_sub_arr(a , mid + 1, high);
    int cross = max_cross_sum(a , low ,mid, high);
    return leftsum>=rightsum?leftsum>=cross?leftsum:cross:rightsum>=cross?rightsum:cross;
}

int main(){
    int a[] = {1,2,3,4,5};
    cout << max_cross_sum(a , 0 , 2 , 4) << endl;
    return 0;
}