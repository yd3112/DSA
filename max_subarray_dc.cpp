#include <iostream>
using namespace std;

//this is for max crossing sub array

int max_cross_array(int a[], int low, int high, int mid){
    if(high == low){
        return a[low];
    }
    int sum = 0;
    int max_leftsum = -2147483647;
    int max_rightsum = -2147483647;
    for(int i = mid; i >= 0; i--){
        sum += a[i];
        if(max_leftsum < sum){
            max_leftsum = sum;
        }
    }
    sum = 0;
    for(int i = mid+1; i <= high; i++){
        sum += a[i];
        if(max_rightsum < sum){
            max_rightsum = sum;
        }
    }
    return max_leftsum + max_rightsum;
}

int max_subarray(int a[], int low, int high){
    if(low == high){
        return a[low];
    }
    int mid = (low + high)/2;
    int left_max = max_subarray(a, low ,mid);
    int right_max = max_subarray(a,mid+1, high);
    int cross_max = max_cross_array(a,low,high,mid);

    if(left_max >= right_max && left_max >= cross_max){
        return left_max;
    }
    else if(right_max > left_max && right_max >= cross_max){
        return right_max;
    }
    else{
        return cross_max;
    }
}

int main(){
    int a[] = {1,2,3,4};
    int x = max_subarray(a,0,3);
    cout << x << endl;
    return 0;
}