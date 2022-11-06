#include <iostream>
#include <vector>
using namespace std;

bool prime(int x)
{
    if (x == 1)
        return false;
    if (x == 2 || x == 3)
        return true;

    if(x % 2 !=0 && x % 3 != 0){
        for(int i = 7; i * i <= x; i = i + 6){
            if(x % i == 0 || x % (i+2) == 0)
                return false;
        }
        return true;
    }
    else{
        return false;
    }
}

int sieve(int x){
    vector<bool>isPrime(x+1 , true);
    for(int i = 2; i * i <= x; i++){
        if(prime(i)){
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
    sieve(10);
    return 0;
}