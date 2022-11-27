#include <iostream>
using namespace std;

int rope(int x , int a, int b, int c, int count){
    if(x == 0)
        return count;
    if(x < 0)
        return -1;
    int w = rope(x - a,a,b,c ,count + 1);
    int y = rope(x - b,a,b,c ,count + 1);
    int z = rope(x - c,a,b,c ,count +1);
    return w>=y?w>=z?w:z:y>=z?y:z;
}

int main(){
    cout << rope(5 , 3 , 3 , 3, 0);
}