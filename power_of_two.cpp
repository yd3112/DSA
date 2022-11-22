#include <iostream>
using namespace std;

bool isPower_of_two(int num){
    if(num & (num-1))
        return false;
    else
        return true;
}

int main(){
    bool ans = isPower_of_two(15);
    cout << ans << endl;
    return 0;
}