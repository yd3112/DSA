#include <iostream>
using namespace std;

int fun(int a[], int n)
{
    int res = 1, cur = 1;
    for(int i= 1; i < n; i++){
        if((a[i] % 2==0 && a[i-1] % 2 != 0) || (a[i] % 2 != 0 && a[i-1] % 2 == 0)){
            cur++;
            res = max(cur , res);
        }
        else{
            cur = 1;
        }
    }
    return res;
}

int main()
{
    int a[] = {1,2,3,4,4,5,6};
    cout << fun(a , 7) << endl;
    return 0;
}