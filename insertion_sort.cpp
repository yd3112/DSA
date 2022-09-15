#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    //ini. of data
    int data[] = {10,9,8,7,6,5,4,3,2,1};
    // int i = 1 , length = 10; 
    for(int i = 1; i < 10; i++){
        int key = data[i];
        int j = i-1;

        //swaping the data
        while( j >= 0){
            if(data[j] > key){
                data[j+1] = data[j];
                data[j] = key;
                j = j-1;
            }
        }
    }
    //printing The data
    for(int i =0;i < 10; i++){
        cout << data[i] << "  ";
    }
    return 0;
}