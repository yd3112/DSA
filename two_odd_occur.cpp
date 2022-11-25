#include <iostream>
using namespace std;

int main(){
    int res = 0 , res1 = 0, res2 = 0,x = 0;
    int a[] = {1,1,2,2,2,3,3,4,4,5,5,5,5,5};
    for(int i = 0; i < 14; i++){
        res = res ^ a[i];
    }
    res = res & ~(res - 1);
    for(int i =0; i < 14; i++){
        if(res & a[i])
            res1 = res1 ^ a[i];
        else
            res2 = res2 ^ a[i];
    }
    cout << res1 << endl << res2;
    return 0;
}