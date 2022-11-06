#include <iostream>
#include <vector>
using namespace std;


int sieve(int x){
    vector<bool>isPrime(x+1 , true);
    for(int i = 2; i * i <= x; i++){
        if(isPrime[i]){
            for(int j = 2*i; j <=x; j += i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 2; i < x; i++){
        if(isPrime[i]){
            cout << i << " ";
        }
    }
}

int main(){
    sieve(20);
    return 0;
}