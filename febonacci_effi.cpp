#include <iostream>
using namespace std;



int* febonacci(int n , int a[]){
    if(n == 2){
        int res[4];
        res[0] = a[0]*a[0] + a[1]*a[2];
        res[1] = a[0]*a[1] + a[1]*a[3];
        res[2] = a[2]*a[0] + a[3]*a[1];
        res[3] = a[2]*a[2] + a[3]*a[3];
        for(int i = 0; i < 4; i++)
            a[i] = res[i];
        return a;
    }
    if(n == 3){
        a = febonacci(2 , a);
        int z[4];
        z[0] = a[0] + a[1];
        z[1] = a[0];
        z[2] = a[2] + a[3];
        z[3] = a[2];
        for(int i = 0; i < 4; i++)
            a[i] = z[i];
        return a;
    }

    a = febonacci(n/2 , a);
    a = febonacci(2 , a);
    if(n % 2 == 0){
        return a;
    }
    else{
        int y[4];
        y[0] = a[0] + a[1];
        y[1] = a[0];
        y[2] = a[2] + a[3];
        y[3] = a[2];
        for(int i = 0; i < 4; i++)
            a[i] = y[i];
        return a;
    }
}

int main(){
    int a[] = {1,1,1,0};
    int *res;
    res = febonacci(6 , a);
    cout << res[1]  << endl;
    return 0;
}