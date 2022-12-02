#include <iostream>
using namespace std;

void frequency(int a[], int n){
    int freq = 1;

    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]){
            cout << "frequency of " << a[i-1] << " is : " <<freq << endl;
            freq = 1; 
        }
        else
            freq++;
    }
    cout << "frequency of " << a[n-1] << " is : " <<freq << endl;
}

int main(){
    int a[] = {1,1,1,2,3,3,4,4,4,4,5,5,5};
    frequency(a , 13);
    return 0;
}