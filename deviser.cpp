#include <iostream>
using namespace std;

void devisers(int x){
    if(x == 1){
        cout << 1 << endl;
        return;
    }
    int i;
    for(i = 1; i*i <= x; i++){
        if(x % i == 0){
            cout << i << " ";
        }
    }
    for( ; i >=1; i--){
        if(x % i == 0){
            if(i != x/i)
                cout << x/i << " ";
        }
    }
}

int main(){
    devisers(25);
    return 0;
}