#include<bits/stdc++.h>
using namespace std;

void zero_at_end(int a[], int n){
    int index = 0;
    for(int i =0; i < n; i++){
        if(a[i]){
            swap(a[i] , a[index]);
            index++;
        }
    }
}

int main(){
    int a[] = {10 , 8 , 0, 0,12 ,0};
    zero_at_end(a , 6);
    for(int i = 0; i < 6; i++){
        cout << a[i] << " ";
    }
}