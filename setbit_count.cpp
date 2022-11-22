#include <iostream>
using namespace std;

int setbit(int num){
    int res = 0;
    while(num > 0){
        num = (num & (num -1));
        res++;
    };
    return res;
}

int main(){
    int ans = setbit(5);
    cout << ans << endl;
}