#include <iostream>
using namespace std;

void reverse(int a[], int low , int high){
    while(high > low){
        swap(a[high--] , a[low++]);
    }
}

void left_rotate(int a[] , int n, int d){
    reverse(a , 0 , d-1);
    reverse(a , d , n -1);
    reverse(a , 0 , n - 1);
}

int main(){
    int a[] = {1,2,3,4,5,6};
    left_rotate(a , 6 , 3);
    for(int i = 0; i < 6 ; i++){
        cout << a[i] << " ";
    }
    return 0;
}