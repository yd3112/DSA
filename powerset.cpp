#include <bits/stdc++.h>
using namespace std;

void powerset(string s){
    int n = s.length();
    int powset_size = pow(2 , n);
    for(int i = 0; i < powset_size; i++){
        for(int j =0; j < n; j++){
            if(i & 1 << j){
                cout << s[j];
            }
        }
        cout <<endl;
    }
}

int main(){
    string s = "abc";
    powerset(s);
    return 0;
}