#include <iostream>
using namespace std;

int jor(int n , int k){
    if(n == 1){
        return 0; 
    }

    return (jor( n -1 , k) + k) % n;
}

int main(){
    cout << jor(7 , 3) << endl;
}