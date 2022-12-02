#include <iostream>
using namespace std;

int max_diffrence(int a[] , int n){
    int max_diff = a[1] - a[0];
    int min = a[0];
    for(int i = 1; i < n; i++){
        if(max_diff < a[i] - min){
            max_diff = a[i] - min;
        }
        if(a[i] < min)
            min = a[i];
    }
    return max_diff;
}

int main(){
    int a[] = {30, 20 ,15};
    cout << max_diffrence(a , 3);
    return 0;
}