#include <iostream>
using namespace std;

void toh(int n, char A = 'A', char B = 'B', char C = 'C'){
    if(n == 1){
        cout << "Move 1 from " <<  A <<" to " << C << endl;
        return;
    }
    toh(n-1,A,C,B);
    cout <<"move " <<n <<" from "<<A <<"to " <<C<<endl;
    toh(n-1 , B ,A ,C);
}

int main(){
    toh(3);
}