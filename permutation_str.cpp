#include <bits/stdc++.h>
using namespace std;

void permutation(string s, int i = 0){
    if(i == s.length()){
        cout << s << endl;
        return;
    }
    for(int j = i; j < s.length(); j++){
        swap(s[i] , s[j]);
        permutation(s , i +1);
    }
}

int main(){
    permutation("abc");
}