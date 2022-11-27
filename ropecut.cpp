#include <iostream>
using namespace std;

int rope(int x , int a, int b, int c){
    if(x == 0)
        return 0;
    if(x < 0)
        return -1;
    int p = rope(x - a,a,b,c );
    int q = rope(x - b,a,b,c );
    int r = rope(x - c,a,b,c);
    int res = p>=q?p>=r?p:r:q>=r?q:r;
    if(res == -1)
        return -1;
    return res + 1;
}

int main(){
    cout << rope(5 , 3 , 3 , 3);
}