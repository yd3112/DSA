#include <iostream>
using namespace std;

//function that will marge the small array to gather
void merge(int a[], int begin , int mid, int end){
    int leftLength = mid - begin + 1;
    int rightLength = end - mid;

    //initializing the two sub arrays
    int *left = new int[leftLength];
    int *right = new int[rightLength];

    //copy the data to sub arrays
    for(int k = 0; k < leftLength; k++){
        left[k] = a[begin + k];
    };
    for(int k = 0; k < rightLength; k++){
        right[k] = a[mid + k +1];
    };

    //initializing the index of the arrays to zero
    int Lindex = 0;
    int Rindex = 0;
    int k = begin;  //for main array index

    //mergeing the two subArrays to the main Array
    while(Lindex < leftLength && Rindex < rightLength){
        if(left[Lindex] <= right[Rindex]){
            a[k] = left[Lindex];
            Lindex++;
        }
        else if(left[Lindex] >= right[Rindex]){
            a[k] = right[Rindex];
            Rindex++;
        }
        k++;
    }

    //Copying the Other Elemetns to the main array
    for(int i = Lindex; i < leftLength; i++){
        a[k] = left[i];
        k++;
    }

    for(int i = Rindex; i < rightLength; i++){
        a[k] = right[i];
        k++;
    }

    //delete the temp variables and array
    delete[] left;
    delete[] right;
}

//Function that will break the problem in small part
void meregeSort(int a[] , int begin, int end){
    if(begin >= end){
        return;
    }

    //calculating the mid of the array
    int mid = (begin + end)/2;

    //Recursion method
    meregeSort(a , begin , mid);
    meregeSort(a , mid +1 , end);
    merge(a , begin , mid , end);
}

int main(){
    int data[] = { 12, 11, 13, 5, 6, 7 };

    meregeSort(data , 0 , 5);

    for(int i = 0; i < 6 ; i++){
        cout << data[i] << "  ";
    }

    return 0;
}