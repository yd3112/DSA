#include <bits/stdc++.h>
using namespace std;

void substrs(string s , string cur = "", int i = 0){
    if(i == s.length()){
        cout << cur << " ";
        return;
    }
    substrs(s , cur , i+1);
    substrs(s , cur + s[i] , i +1);
}

int main(){
    string s = "abc";
    substrs(s);
    return 0;
}