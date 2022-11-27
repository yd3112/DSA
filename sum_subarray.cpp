#include <iostream>
using namespace std;

int sum(int x[] , int len , int res){
    if(len == 0){
        return res == 0? 1: 0;
    }
    return (sum(x , len -1, res) + sum(x , len -1 , res - x[len-1]));
}

int main(){
    int x[] = {10 , 20 ,25};
    cout << sum(x , 3 , 25) << endl;
}